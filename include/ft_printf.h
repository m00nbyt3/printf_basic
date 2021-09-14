/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycarro <ycarro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 11:08:59 by ycarro            #+#    #+#             */
/*   Updated: 2021/09/14 11:17:36 by ycarro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

//Header files
# include <stdarg.h>
# include "../libft/libft.h"

//Functions
int	ft_printf(const char *str, ...);
int	ft_print_hex(char type, unsigned int num, int ret);
int	ft_print_ptr(unsigned long num, int ret);
int	ft_putchar_mod(char c);
int	ft_putstr_mod(char *s);
int	ft_putnbr_mod(int n, int ret);
int	ft_print_uns(unsigned int num, int ret);

#endif