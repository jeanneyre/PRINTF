/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crondeau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 10:56:37 by crondeau          #+#    #+#             */
/*   Updated: 2021/08/25 12:34:31 by crondeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

int	ft_parser(int i, int *i_count_numbers, const char *str, va_list arg)
{
	if (str[i] == '%')
	{
		i++;
		if (str[i] == 'c')
			i = ft_printf_c(i, i_count_numbers, str, arg);
		else if (str[i] == 's')
			i = ft_printf_s(i, i_count_numbers, str, arg);
		else if (str[i] == 'p')
			i = ft_printf_p(i, i_count_numbers, str, arg);
		else if (str[i] == 'd')
			i = ft_printf_d(i, i_count_numbers, str, arg);
		else if (str[i] == 'i')
			i = ft_printf_i(i, i_count_numbers, str, arg);
		else if (str[i] == 'u')
			i = ft_printf_u(i, i_count_numbers, str, arg);
		else if ((str[i] == 'x') || (str[i] == 'X'))
			i = ft_printf_x(i, i_count_numbers, str, arg);
		else if (str[i] == '%')
			i = ft_printf_percent(i, i_count_numbers, str);
	}
	else
	{
		ft_putchar(str[i++], i_count_numbers);
	}
	return (i);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		i_count_numbers;
	va_list	arg;

	i = 0;
	i_count_numbers = 0;
	va_start(arg, str);
	while (str[i] != '\0')
	{
		i = ft_parser(i, &i_count_numbers, str, arg);
	}
	va_end(arg);
	return (i_count_numbers);
}
