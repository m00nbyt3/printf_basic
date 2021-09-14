/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycarro <ycarro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 13:02:46 by ycarro            #+#    #+#             */
/*   Updated: 2021/09/14 12:15:39 by ycarro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

char	ft_checkcase(char c, char type);

int	ft_print_hex(char type, unsigned int num, int ret)
{
	int		aux;
	char	c;

	if (num < 16)
	{
		if (num < 10)
			c = num + '0';
		else
			c = ((num - 9) + '0') + 16;
	}
	else
	{
		aux = num % 16;
		if (aux < 10)
			c = aux + '0';
		else
			c = ((aux - 9) + '0') + 16;
		ret = ft_print_hex(type, num / 16, ret);
	}
	c = ft_checkcase(c, type);
	write(1, &c, 1);
	ret++;
	return (ret);
}

char	ft_checkcase(char c, char type)
{
	if (type == 'x')
		c = ft_tolower(c);
	return (c);
}
