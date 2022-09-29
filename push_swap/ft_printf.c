/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchalard <mchalard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 19:51:08 by mchalard          #+#    #+#             */
/*   Updated: 2022/03/16 11:11:01 by mchalard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_putchar(char c, int char_count)
{
	write (1, &c, sizeof(char));
	char_count += 1;
	return (char_count);
}

int	ft_putstr(char *s, int char_count)
{
	int	i;

	i = 0;
	if (!s)
	{
		write (1, "(null)", 6);
		return (char_count + 6);
	}
	while (s[i])
	{
		write (1, &s[i], sizeof(char));
		i++;
	}
	char_count += i;
	return (char_count);
}

int	ft_treat(char c, va_list args, int char_count)
{
	if (c == 's')
		char_count = ft_putstr(va_arg(args, char *), char_count);
	return (char_count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		char_count;
	int		i;
	char	*s;

	char_count = 0;
	i = 0;
	s = (char *)format;
	va_start(args, format);
	while (s[i] != '\0')
	{
		if (s[i] == '%')
		{
			char_count = ft_treat(s[i + 1], args, char_count);
			i++;
		}
		else
			char_count = ft_putchar(s[i], char_count);
		i++;
	}
	va_end(args);
	return (char_count);
}
