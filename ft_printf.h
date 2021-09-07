/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crondeau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 08:30:53 by crondeau          #+#    #+#             */
/*   Updated: 2021/08/23 15:55:15 by crondeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <limits.h>
# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>
# include <stdint.h>
# include <stdio.h>

void	ft_putstr(char *str, int *i_count_numbers);
void	ft_putchar(char c, int *i_count_numbers);
void	ft_putnbr(long long int nb, int *i_count_numbers);
void	ft_putnbr_base(long long int nb, char *base, int *i_count_numbers);
void	ft_putnbr_base_ptr(unsigned long nb, char *base, int *i_count_numbers);	
int		ft_strlen(const char *str);
int		ft_printf(const char *str, ...);
int		ft_parser(int i, int *i_count_numbers, const char *str, va_list arg);
int		ft_printf_c(int i, int *i_count_numbers, const char *str, va_list arg);
int		ft_printf_d(int i, int *i_count_numbers, const char *str, va_list arg);
int		ft_printf_i(int i, int *i_count_numbers, const char *str, va_list arg);
int		ft_printf_p(int i, int *i_count_numbers, const char *str, va_list arg);
int		ft_printf_s(int i, int *i_count_numbers, const char *str, va_list arg);
int		ft_printf_u(int i, int *i_count_numbers, const char *str, va_list arg);
int		ft_printf_x(int i, int *i_count_numbers, const char *str, va_list arg);
int		ft_printf_percent(int i, int *i_count_numbers, const char *str);

#endif
