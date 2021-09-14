/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_uns.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycarro <ycarro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 15:11:53 by ycarro            #+#    #+#             */
/*   Updated: 2021/09/14 12:26:51 by ycarro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_print_uns(unsigned int num, int ret)
{
	char	c;

	if (num > 9)
	{
		ret = ft_print_uns(num / 10, ret);
		ret = ft_print_uns(num % 10, ret);
	}
	else
	{
		c = (char)num + '0';
		ret += ft_putchar_mod(c);
	}
	return (ret);
}
