/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycarro <ycarro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 14:11:05 by ycarro            #+#    #+#             */
/*   Updated: 2021/09/07 15:43:40 by ycarro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	size_t			size;
	int				i;
	unsigned int	tam;

	if (!s)
		return (0);
	if (start > ft_strlen(s) - 1)
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	size = (len + 1) * sizeof(char);
	str = (char *)malloc(size);
	if (!str)
		return (0);
	tam = (unsigned int)ft_strlen(s);
	if (start < tam)
	{
		i = 0;
		while (len--)
			str[i++] = s[start++];
		str[i] = '\0';
	}
	return (str);
}
