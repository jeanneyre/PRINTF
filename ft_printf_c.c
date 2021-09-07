/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_c.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crondeau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 14:18:09 by crondeau          #+#    #+#             */
/*   Updated: 2021/08/23 10:16:55 by crondeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

int	ft_printf_c(int i, int *i_count_numbers, const char *str, va_list arg)
{
	int	c;

	if (str[i] == 'c')
	{
		c = va_arg(arg, int);
		ft_putchar(c, i_count_numbers);
		i++;
		return (i);
	}
	else
		return (i);
}
