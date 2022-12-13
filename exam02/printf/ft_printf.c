/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 11:27:07 by abarrier          #+#    #+#             */
/*   Updated: 2022/02/18 12:57:16 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlen(char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	ft_putrec_ud(unsigned long long ud, char *base, int *res)
{
	size_t	lenbase;

	lenbase = ft_strlen(base);
	if (ud / lenbase < 1)
		*res += write(1, &base[ud % lenbase], 1);
	else
	{
		ft_putrec_ud(ud / lenbase, base, res);
		ft_putrec_ud(ud % lenbase, base, res);
	}
}

int	ft_putnb_x(int x)
{
	int	res;
	unsigned int	ud;

	res = 0;
	ud = (unsigned int)x;
	ft_putrec_ud(ud, "0123456789abcdef", &res);
	return (res);
}

int	ft_putnb_d(int d)
{
	int	res;
	unsigned int	ud;

	res = 0;
	if (d < 0)
	{
		res += write(1, "-", 1);
		d *= (-1);
	}
	ud = (unsigned int)d;
	ft_putrec_ud(ud, "0123456789", &res);
	return (res);
}

int	ft_putstr(char *s)
{
	int	res;
	int	i;

	res = 0;
	i = 0;
	while (s[i])
	{
		res += write(1, &s[i], 1);
		i++;
	}
	return (res);
}

int	ft_putx(va_list va)
{
	int	res;
	int	x;

	res = 0;
	x = (int)va_arg(va, int);
	res += ft_putnb_x(x);
	return (res);
}

int	ft_putd(va_list va)
{
	int	res;
	int	d;

	res = 0;
	d = (int)va_arg(va, int);
	res += ft_putnb_d(d);
	return (res);
}

int	ft_puts(va_list va)
{
	int	res;
	char	*s;

	res = 0;
	s = (char *)va_arg(va, char *);
	res += ft_putstr(s);
	return (res);
}

int	ft_putconv(va_list va, char c)
{
	int	res;

	res = 0;
	if (c == 's')
		res += ft_puts(va);
	else if (c == 'd')
		res += ft_putd(va);
	else if (c == 'x')
		res += ft_putx(va);
	return (res);
}

int	ft_printf(const char *s, ...)
{
	int	res;
	int	i;
	va_list	va;

	res = 0;
	i = 0;
	va_start(va, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			i++;
			res += ft_putconv(va, s[i]);
		}
		else
		{
			res += write(1, &s[i], 1);
		}
		i++;
	}
	va_end(va);
	return (res);
}

#include <limits.h>

int	main(void)
{
	int	ORI;
	int	FMT;
	char	t1[] = "Hello";
	int	d1 = INT_MAX;
	int	d2 = -102030405;
	int	x1 = INT_MAX;
	int	x2 = INT_MIN;
	int	x3 = 0;

	ORI = 0;
	ORI = printf("%s\n", t1);
	FMT = 0;
	FMT = ft_printf("%s\n", t1);
	printf("ORI: res %d\tFMT: %d\n", ORI, FMT);

	ORI = 0;
	ORI = printf("%d\n", d1);
	FMT = 0;
	FMT = ft_printf("%d\n", d1);
	printf("ORI: res %d\tFMT: %d\n", ORI, FMT);

	ORI = 0;
	ORI = printf("%d\n", d2);
	FMT = 0;
	FMT = ft_printf("%d\n", d2);
	printf("ORI: res %d\tFMT: %d\n", ORI, FMT);

	ORI = 0;
	ORI = printf("%x\n", x1);
	FMT = 0;
	FMT = ft_printf("%x\n", x1);
	printf("ORI: res %x\tFMT: %x\n", ORI, FMT);

	ORI = 0;
	ORI = printf("%x\n", x2);
	FMT = 0;
	FMT = ft_printf("%x\n", x2);
	printf("ORI: res %x\tFMT: %x\n", ORI, FMT);

	ORI = 0;
	ORI = printf("%x\n", x3);
	FMT = 0;
	FMT = ft_printf("%x\n", x3);
	printf("ORI: res %x\tFMT: %x\n", ORI, FMT);

	ORI = 0;
	ORI = printf("%s World !@\nWe are %d in the world... So many %x\n", t1, d1, x1);
	FMT = 0;
	FMT = printf("%s World !@\nWe are %d in the world... So many %x\n", t1, d1, x1);
/*
	ORI = 0;
	ORI = printf("%j", x1);
	FMT = 0;
	FMT = printf("%j", x1);
*/
	return (0);
}

