/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_mod.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycarro <ycarro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 13:07:50 by ycarro            #+#    #+#             */
/*   Updated: 2021/09/14 12:04:29 by ycarro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_putstr_mod(char *s)
{
	int	size;

	size = 0;
	if (s)
	{
		size = ft_strlen(s);
		write (1, s, size);
	}
	else
		size = write (1, "(null)", 6);
	return (size);
}
