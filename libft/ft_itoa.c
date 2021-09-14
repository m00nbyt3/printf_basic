/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycarro <ycarro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 14:11:05 by ycarro            #+#    #+#             */
/*   Updated: 2021/09/07 15:40:10 by ycarro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	chk_len(int n);
int	setnum(int n, char *pt);

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		sign;

	sign = 1;
	if (n < 0)
		sign = 2;
	i = chk_len(n);
	str = (char *) malloc((i + sign) * sizeof(char));
	if (!str)
		return (0);
	*(str + (i + sign - 1)) = '\0';
	if (--sign)
		*str = '-';
	i += sign;
	while (i-- > sign)
		n = setnum(n, str + i);
	return (str);
}

int	chk_len(int n)
{
	int	size;

	if (n == 0)
		return (1);
	if (n < 0)
		n *= -1;
	size = 0;
	while (n)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

int	setnum(int n, char *pt)
{
	int	r;

	if (n == -2147483648)
	{
		*pt = 8 + '0';
		return (214748364);
	}
	if (n < 0)
		n *= -1;
	r = n % 10;
	n = n / 10;
	*pt = r + '0';
	return (n);
}
