/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_mod.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycarro <ycarro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 13:54:23 by ycarro            #+#    #+#             */
/*   Updated: 2021/09/13 10:37:24 by ycarro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	recc(int n, int ret);

int	ft_putnbr_mod(int n, int ret)
{
	if (n == -2147483648)
		ret = ft_putstr_mod("-2147483648");
	else if (n < 0)
	{
		ret += ft_putchar_mod('-');
		ret = recc(-n, ret);
	}
	else
	{
		ret += recc(n, ret);
	}
	return (ret);
}

int	recc(int n, int ret)
{
	char	c;

	if (n > 9)
	{
		ret = recc(n / 10, ret);
		ret = recc(n % 10, ret);
	}
	else
	{
		c = (char)n + '0';
		ret += ft_putchar_mod(c);
	}
	return (ret);
}
