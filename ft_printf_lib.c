/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_lib.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crondeau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 12:16:33 by crondeau          #+#    #+#             */
/*   Updated: 2021/08/25 12:16:19 by crondeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

void	ft_putnbr(long long int nb, int *i_count_numbers)
{
	if (nb >= 0 && nb < 10)
	{
		ft_putchar(nb + '0', i_count_numbers);
	}
	else if (nb < 0)
	{
		ft_putchar('-', i_count_numbers);
		ft_putnbr(-nb, i_count_numbers);
	}
	else if (nb > 0)
	{
		ft_putnbr(nb / 10, i_count_numbers);
		ft_putnbr(nb % 10, i_count_numbers);
	}
}

void	ft_putnbr_base(long long int nb, char *base, int *i_count_numbers)
{
	int	base_size;

	base_size = ft_strlen(base);
	if (nb >= base_size)
	{
		ft_putnbr_base(nb / base_size, base, i_count_numbers);
		ft_putnbr_base(nb % base_size, base, i_count_numbers);
	}
	else
		ft_putchar(base[nb], i_count_numbers);
}

void	ft_putnbr_base_ptr(unsigned long nb, char *base, int *i_count_numbers)
{
	unsigned int	base_size;

	base_size = ft_strlen(base);
	if (nb >= base_size)
	{
		ft_putnbr_base_ptr(nb / base_size, base, i_count_numbers);
		ft_putnbr_base_ptr(nb % base_size, base, i_count_numbers);
	}
	else
		ft_putchar(base[nb], i_count_numbers);
}
