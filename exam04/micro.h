#ifndef MICRO_H
# define MICRO_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <signal.h>
# include <sys/types.h>
# include <sys/wait.h>

# define TOK_BREAK ";"
# define TOK_PIPE "|"

# define CMD_CD "cd"

# define ERR_FATAL "error: fatal"
# define ERR_CD_ARG "error: cd bad arguments"
# define ERR_CD_ISSUE "error: cd go to "
# define ERR_CMD "error: execve on "

# define SEP_P "##############################"
# define SEP_SP "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"

enum tok_type
{
	NONE,
	BREAK,
	PIPE,
	END
};

enum fd_type
{
	READ,
	WRITE
};

// PUT
int	ft_putchar_fd(int fd, int c);
int	ft_putstr_fd(int fd, char *s);
int	ft_putstr_endl_fd(int fd, char *s);

//UTILS
size_t	ft_strlen(char *s);
size_t	ft_count_block(char **s);
size_t	ft_count_block_cmd(char **s);
size_t	ft_block_cmd_size(char **s);
size_t	ft_cmd_size(char **s);
void	ft_link_addr_ptr(char **s1, char **s2, size_t n);

//MICRO
int	micro_loop(char **argv, char **envp, size_t n_block);
int	micro_exec(char **argv, char **envp, size_t len_cmd,
		int tok_prev, int tok_next, int *save_fd);
int	micro_exec_cd(char **fullcmd, size_t len_cmd);

#endif
