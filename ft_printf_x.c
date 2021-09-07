/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crondeau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 14:39:32 by crondeau          #+#    #+#             */
/*   Updated: 2021/08/20 10:53:21 by crondeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

int	ft_printf_x(int i, int *i_count_numbers, const char *str, va_list arg)
{
	unsigned int	x;
	unsigned int	X;

	if (str[i] == 'x')
	{
		x = va_arg(arg, unsigned int);
		ft_putnbr_base(x, "0123456789abcdef", i_count_numbers);
		i++;
		return (i);
	}
	if (str[i] == 'X')
	{
		X = va_arg(arg, unsigned int);
		ft_putnbr_base(X, "0123456789ABCDEF", i_count_numbers);
		i++;
		return (i);
	}
	else
		return (i);
}
