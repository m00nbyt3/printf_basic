/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycarro <ycarro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 14:11:05 by ycarro            #+#    #+#             */
/*   Updated: 2021/09/07 15:43:05 by ycarro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	setc(char const *org, char const *dst);

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	size;
	char	*str;
	char	*aux;

	if (!s1 || !s2)
		return (0);
	size = ft_strlen(s1) + ft_strlen(s2) + 1;
	str = (char *)malloc(size * sizeof(char));
	if (!str)
		return (0);
	aux = str;
	while (*s1 || *s2)
	{
		if (*s1)
			s1 += setc(s1, aux);
		else if (*s2)
			s2 += setc(s2, aux);
		aux++;
	}
	*aux = '\0';
	return (str);
}

int	setc(char const *org, char const *dst)
{
	char	*mod;

	mod = (char *)dst;
	*mod = *org;
	return (1);
}
