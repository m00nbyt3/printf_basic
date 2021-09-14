/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycarro <ycarro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 14:11:05 by ycarro            #+#    #+#             */
/*   Updated: 2021/09/07 15:43:28 by ycarro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	size;

	if (!(*needle))
		return ((char *)haystack);
	size = ft_strlen(needle);
	while (len > 0 && *haystack)
	{
		if (*haystack == *needle)
		{
			if (!ft_strncmp(haystack, needle, size))
			{
				if (len >= size)
					return ((char *)haystack);
			}
		}
		haystack++;
		len--;
	}
	return (0);
}
