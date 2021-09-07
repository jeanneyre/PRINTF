/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_i.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crondeau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 14:35:32 by crondeau          #+#    #+#             */
/*   Updated: 2021/08/24 10:00:03 by crondeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

int	ft_printf_i(int i, int *i_count_numbers, const char *str, va_list arg)
{
	int	n;

	if (str[i] == 'i')
	{
		n = va_arg(arg, int);
		ft_putnbr(n, i_count_numbers);
		i++;
		return (i);
	}
	else
		return (i);
}
