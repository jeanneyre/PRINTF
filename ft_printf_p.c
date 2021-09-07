/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crondeau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 14:32:33 by crondeau          #+#    #+#             */
/*   Updated: 2021/08/20 10:51:29 by crondeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

int	ft_printf_p(int i, int *i_count_numbers, const char *str, va_list arg)
{
	unsigned long	p;

	if (str[i] == 'p')
	{
		p = va_arg(arg, unsigned long);
		ft_putstr("0x", i_count_numbers);
		ft_putnbr_base_ptr(p, "0123456789abcdef", i_count_numbers);
		i++;
		return (i);
	}
	else
		return (i);
}
