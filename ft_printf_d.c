/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_d.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crondeau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 14:34:20 by crondeau          #+#    #+#             */
/*   Updated: 2021/08/24 14:16:02 by crondeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_d(int i, int *i_count_numbers, const char *str, va_list arg)
{
	int	n;

	if (str[i] == 'd')
	{
		n = va_arg(arg, int);
		ft_putnbr(n, i_count_numbers);
		i++;
		return (i);
	}
	else
		return (i);
}
