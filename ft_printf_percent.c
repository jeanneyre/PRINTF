/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_percent.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crondeau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 11:36:39 by crondeau          #+#    #+#             */
/*   Updated: 2021/08/23 17:15:09 by crondeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_percent(int i, int *i_count_numbers, const char *str)
{
	if (str[i] == '%')
	{
		ft_putchar('%', i_count_numbers);
		i++;
	}
	return (i);
}
