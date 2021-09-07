/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crondeau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 14:36:56 by crondeau          #+#    #+#             */
/*   Updated: 2021/08/20 10:52:59 by crondeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

int	ft_printf_u(int i, int *i_count_numbers, const char *str, va_list arg)
{
	unsigned int	n;

	if (str[i] == 'u')
	{
		n = va_arg(arg, unsigned int);
		ft_putnbr(n, i_count_numbers);
		i++;
		return (i);
	}
	else
		return (i);
}
