/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   micro.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 11:05:43 by abarrier          #+#    #+#             */
/*   Updated: 2022/08/27 11:05:45 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "micro.h"

int	micro_exec_cd(char **fullcmd, size_t len_cmd)
{
	int	res;

	res = 0;
	//printf("CD COMMAND\n");
	if (len_cmd != 2)
	{
		ft_putstr_endl_fd(2, ERR_CD_ARG);
		free(fullcmd);
		return (EXIT_FAILURE);
	}
	res = chdir(fullcmd[1]);
	if (res != 0)
	{
		ft_putstr_fd(2, ERR_CD_ISSUE);
		ft_putstr_endl_fd(2, fullcmd[1]);
		free(fullcmd);
		return (EXIT_FAILURE);

	}
	free(fullcmd);
	return (EXIT_SUCCESS);

}

int	micro_exec(char **argv, char **envp, size_t len_cmd,
		int tok_prev, int tok_next, int *save_fd)
{
	int	res;
	char	**fullcmd;
	int	pfd[2];
	pid_t	pid;
	int	status;

	res = 0;
	fullcmd = (char **)malloc(sizeof(char *) * (len_cmd + 1));
	if (!fullcmd)
	{
		ft_putstr_endl_fd(2, ERR_FATAL);
		return (EXIT_FAILURE);
	}
	ft_link_addr_ptr(argv, fullcmd, len_cmd);
//	int test = 0;
//	while (fullcmd[test])
//	{
//		printf("fullcmd[%d]: %s\n", test, fullcmd[test]);
//		test++;
//	}
	if (len_cmd == 1 && ft_strlen(fullcmd[0]) == 0)
	{
		free(fullcmd);
		return (EXIT_SUCCESS);
	}
	else if (strcmp(fullcmd[0], CMD_CD) == 0)
		return (micro_exec_cd(fullcmd, len_cmd));
	else
	{
		if (tok_next == PIPE)
		{
			if (pipe(pfd) != 0)
			{
				ft_putstr_endl_fd(2, ERR_FATAL);
				return (EXIT_FAILURE);
			}
		}
		pid = fork();
		if (pid < 0)
		{
			ft_putstr_endl_fd(2, ERR_FATAL);
			return (EXIT_FAILURE);
		}
		if (pid == 0)
		{
			if (tok_prev == PIPE)
				dup2(*save_fd, STDIN_FILENO);
			if (tok_next == PIPE)
				dup2(pfd[WRITE], STDOUT_FILENO);
			execve(fullcmd[0], fullcmd, envp);
			ft_putstr_fd(2, ERR_CMD);
			ft_putstr_endl_fd(2, fullcmd[0]);
			free(fullcmd);
			exit(127);
		}
		else
		{
			if (tok_prev == PIPE)
				close(*save_fd);
			if (tok_next == PIPE)
			{
				close(pfd[WRITE]);
				*save_fd = pfd[READ];
			}
			waitpid(pid, &status, 0);
			if (WIFEXITED(status) == 1)
				res = WEXITSTATUS(status);
			else if (WIFSIGNALED(status) == 1)
				res = WTERMSIG(status);
			else if (WIFSTOPPED(status))
				res = WSTOPSIG(status);
			else
				res = EXIT_SUCCESS;
		}
	}
	free(fullcmd);
	return (res);
}


int	micro_loop(char **argv, char **envp, size_t n_block)
{
	int	res;
	int	pos;
	size_t	n_cmd;
	size_t	len_block_cmd;
	size_t	len_cmd;
	int	i_block;
	int	i_cmd;
	int	j_cmd;
	int	tok_prev; // toktype of previous command block or command line
	int	tok_next; // toktype of next command block or command line
	int	save_fd;

	pos = 1; // start at argv[1]
	i_block = 0;
	//printf("n_block: %zu\n", n_block);
	while (i_block < (int)n_block)
	{
		res = 0;
		n_cmd = ft_count_block_cmd(&argv[pos]) + 1;
		len_block_cmd = ft_block_cmd_size(&argv[pos]); // always 1 minimum command
		i_cmd = 0;
		j_cmd = 0;
		save_fd = -1;
		//printf("# i_block: %d\tn_cmd: %zu\tlen_block_cmd: %zu\targv[%d]: %s\n", i_block, n_cmd, len_block_cmd, pos, argv[pos]);
		while (i_cmd < (int)n_cmd)
		{
			tok_prev = NONE;
			tok_next = NONE;
			if (i_cmd > 0)
				tok_prev = PIPE;
			if ((i_cmd + 1) < (int)n_cmd)
				tok_next = PIPE;
			len_cmd = ft_cmd_size(&argv[pos + j_cmd]);
			//printf("## len_cmd: %zu\targv[%d]: %s\n", len_cmd, (pos + j_cmd), argv[pos + j_cmd]);
			res = micro_exec(&argv[pos + j_cmd], envp, len_cmd, tok_prev, tok_next, &save_fd);
			i_cmd++;
			j_cmd += (len_cmd + 1);
		}
		pos += (len_block_cmd + 1);
		i_block++;
		//printf("%s\n", SEP_P);
	}
	return (res);
}

int	main(int argc, char **argv, char **envp)
{
	size_t	n_block;
	int	res;

	res = 0;
	if (argc <= 1)
		return (EXIT_SUCCESS);
	n_block = ft_count_block(argv) + 1; // always 1 minimum block
	res = micro_loop(argv, envp, n_block);
	return (res);
}
