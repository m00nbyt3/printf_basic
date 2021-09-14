/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycarro <ycarro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 14:11:05 by ycarro            #+#    #+#             */
/*   Updated: 2021/09/07 15:43:08 by ycarro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len;
	size_t	lend;

	len = ft_strlen((char *)src);
	lend = ft_strlen(dst);
	if (lend >= dstsize)
		return (len + dstsize);
	dst += lend;
	dstsize -= lend;
	while (--dstsize > 0 && *src)
		*dst++ = (char)*src++;
	*dst = '\0';
	return (len + lend);
}
