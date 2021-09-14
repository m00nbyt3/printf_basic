/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycarro <ycarro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 14:11:05 by ycarro            #+#    #+#             */
/*   Updated: 2021/09/07 15:41:12 by ycarro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t				i;
	const unsigned char	*str1;
	unsigned char		*str2;

	str1 = (const unsigned char *)src;
	str2 = (unsigned char *)dst;
	if ((!str1 && !str2) || n == 0 || str1 == str2)
		return (0);
	i = -1;
	while (++i < n)
	{
		str2[i] = str1[i];
		if (str1[i] == (unsigned char)c)
			return ((void *)str2 + (i + 1));
	}
	return (0);
}
