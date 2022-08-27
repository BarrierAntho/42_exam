/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   micro_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 11:05:55 by abarrier          #+#    #+#             */
/*   Updated: 2022/08/27 11:05:58 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "micro.h"

void	ft_link_addr_ptr(char **s1, char **s2, size_t n)
{
	int	i;

	i = 0;
	while (i < (int)n)
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = NULL;
}

size_t	ft_count_block(char **s)
{
	size_t	res;
	int	i;

	res = 0;
	i = 0;
	while (s[i])
	{
		if (strcmp(s[i], TOK_BREAK) == 0)
			res++;
		i++;
	}
	return (res);
}

size_t	ft_count_block_cmd(char **s)
{
	size_t	res;
	int	i;

	res = 0;
	i = 0;
	while (s[i] && strcmp(s[i], TOK_BREAK) != 0)
	{
		if (strcmp(s[i], TOK_PIPE) == 0)
			res++;
		i++;
	}
	return (res);
}

size_t	ft_block_cmd_size(char **s)
{
	size_t	res;
	int	i;

	res = 0;
	i = 0;
	while (s[i])
	{
		if (strcmp(s[i], TOK_BREAK) == 0)
			return (res);
		res++;
		i++;
	}
	return (res);
}

size_t	ft_cmd_size(char **s)
{
	size_t	res;
	int	i;

	res = 0;
	i = 0;
	while (s[i])
	{
		if (strcmp(s[i], TOK_BREAK) == 0
			|| strcmp(s[i], TOK_PIPE) == 0)
			return (res);
		res++;
		i++;
	}
	return (res);
}

size_t	ft_strlen(char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

int	ft_putchar_fd(int fd, int c)
{
	return (write(fd, &c, 1));
}

int	ft_putstr_fd(int fd, char *s)
{
	int	res;
	int	i;

	res = 0;
	i = 0;
	while (s[i])
	{
		res += ft_putchar_fd(fd, s[i]);
		i++;
	}
	return (res);
}

int	ft_putstr_endl_fd(int fd, char *s)
{
	int	res;

	res = 0;
	res += ft_putstr_fd(fd, s);
	res += ft_putchar_fd(fd, '\n');
	return (res);
}
