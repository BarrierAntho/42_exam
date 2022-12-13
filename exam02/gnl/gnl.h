/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 14:25:43 by abarrier          #+#    #+#             */
/*   Updated: 2022/02/18 14:47:50 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GNL_H
# define GNL_H

# include <unistd.h>
# include <stdio.h>
# include <limits.h>

char	*gnl(int fd);
char	*gnl_line(int fd, char *buf);
void	gnl_shift_buf(char *buf);

char	*gnl_strjoin(char *s1, char *s2);
void	gnl_strncpy(char *s1, char *s2, int n);
char	*gnl_strchr(char *s, int c);
size_t	gnl_strlen(char *s);

#endif
