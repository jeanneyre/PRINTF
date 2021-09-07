/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crondeau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 14:29:00 by crondeau          #+#    #+#             */
/*   Updated: 2021/08/20 10:52:50 by crondeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

int	ft_printf_s(int i, int *i_count_numbers, const char *str, va_list arg)
{
	char	*s;

	if (str[i] == 's')
	{
		s = va_arg(arg, char *);
		if (!s)
			s = "(null)";
		ft_putstr(s, i_count_numbers);
		i++;
		return (i);
	}
	else
		return (i);
}
