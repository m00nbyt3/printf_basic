/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_mod.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycarro <ycarro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 13:02:51 by ycarro            #+#    #+#             */
/*   Updated: 2021/09/13 10:58:34 by ycarro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_putchar_mod(char c)
{
	write (1, &c, 1);
	return (1);
}
