/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycarro <ycarro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 14:11:05 by ycarro            #+#    #+#             */
/*   Updated: 2021/09/14 12:26:09 by ycarro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char		srch;
	const unsigned char	*str;
	int					size;

	srch = (unsigned char)c;
	str = (const unsigned char *)s;
	size = ft_strlen((char *)str);
	if (str[size] == srch)
		return ((char *)str + size);
	while (size >= 0)
	{
		if (str[size] == srch)
			return ((char *)str + size);
		size--;
	}
	return (0);
}
