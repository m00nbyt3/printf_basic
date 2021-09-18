/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycarro <ycarro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 10:59:34 by ycarro            #+#    #+#             */
/*   Updated: 2021/09/15 13:17:52 by ycarro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_whatis(char type, va_list args);

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		ret;

	va_start(args, str);
	i = -1;
	ret = 0;
	while (str[++i])
	{
		if (str[i] == '%')
		{	
			i++;
			if (str[i] != '%')
				ret += ft_whatis(str[i], args);
			else
				ret += ft_putchar_mod(str[i]);
		}
		else
			ret += ft_putchar_mod(str[i]);
	}
	va_end(args);
	return (ret);
}

int	ft_whatis(char type, va_list args)
{
	if (type == 'c')
		return (ft_putchar_mod(va_arg(args, int)));
	if (type == 's')
		return (ft_putstr_mod(va_arg(args, char *)));
	if (type == 'd' || type == 'i')
		return (ft_putnbr_mod(va_arg(args, int), 0));
	if (type == 'p')
		return (ft_print_ptr(va_arg(args, unsigned long), 0));
	if (type == 'u')
		return (ft_print_uns(va_arg(args, unsigned int), 0));
	if (type == 'x' || type == 'X')
		return (ft_print_hex(type, va_arg(args, unsigned int), 0));
	return (0);
}
