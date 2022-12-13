/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 12:29:08 by abarrier          #+#    #+#             */
/*   Updated: 2022/02/18 12:34:16 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>

int	ft_printf(const char *s, ...);
int	ft_putconv(va_list va, char c);
int	ft_puts(va_list va);
int	ft_putd(va_list va);
int	ft_putx(va_list va);
int	ft_putstr(char *s);
int	ft_putnb_d(int d);
int	ft_putnb_x(int x);
void	ft_putrec_ud(unsigned long long ud, char *base, int *res);
size_t	ft_strlen(char *s);

#endif
