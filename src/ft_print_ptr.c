/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycarro <ycarro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 15:55:08 by ycarro            #+#    #+#             */
/*   Updated: 2021/09/13 10:55:21 by ycarro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_print_ptr(unsigned long num, int ret)
{
	int		aux;
	char	c;

	if (num < 16)
	{
		if (num < 10)
			c = num + '0';
		else
			c = ((num - 9) + '0') + 48;
		write(1, "0x", 2);
		write(1, &c, 1);
		ret += 3;
	}
	else
	{
		aux = num % 16;
		if (aux < 10)
			c = aux + '0';
		else
			c = ((aux - 9) + '0') + 48;
		ret = ft_print_ptr(num / 16, ret);
		write(1, &c, 1);
		ret++;
	}
	return (ret);
}
