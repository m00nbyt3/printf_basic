/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycarro <ycarro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 14:11:05 by ycarro            #+#    #+#             */
/*   Updated: 2021/09/07 15:40:49 by ycarro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	void	*tmp;

	tmp = 0;
	while (lst)
	{
		tmp = lst;
		lst = lst->next;
	}
	return (tmp);
}