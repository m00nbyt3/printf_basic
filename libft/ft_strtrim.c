/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycarro <ycarro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 14:11:05 by ycarro            #+#    #+#             */
/*   Updated: 2021/09/07 15:43:34 by ycarro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*at_start(char const *s1, char const *ltr);
int		at_end(char *aux, char const *ltr);
char	*to_save(char const *s1, int size);

char	*ft_strtrim(char const *s1, char const *set)
{
	int		size;
	char	*tow;
	char	*aux;

	if (!s1 || !set)
		return (0);
	tow = at_start(s1, set);
	size = ft_strlen(tow);
	if (!size)
		return (ft_strdup(tow));
	aux = tow + (size - 1);
	size -= at_end(aux, set);
	return (to_save(tow, size));
}

char	*at_start(char const *s1, char const *set)
{
	int		fnd;
	char	*ltr;

	while (*s1)
	{
		fnd = 0;
		ltr = (char *)set;
		while (*ltr)
		{
			if (*s1 == *ltr)
			{
				fnd++;
				break ;
			}
			ltr++;
		}
		if (!fnd)
			break ;
		s1++;
	}
	return ((char *)s1);
}

int	at_end(char *aux, char const *set)
{
	int		pos;
	int		fnd;
	char	*ltr;

	pos = 0;
	while (*aux)
	{
		fnd = 0;
		ltr = (char *)set;
		while (*ltr)
		{
			if (*aux == *ltr)
			{
				fnd++;
				pos++;
				break ;
			}
			ltr++;
		}
		if (!fnd)
			break ;
		aux--;
	}
	return (pos);
}

char	*to_save(char const *s1, int size)
{
	char	*res;
	int		i;

	if (!(*s1))
		return ((char *)s1);
	res = (char *)malloc((size + 1) * sizeof(char));
	if (!res)
		return (0);
	i = 0;
	while (size--)
	{
		res[i] = s1[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
