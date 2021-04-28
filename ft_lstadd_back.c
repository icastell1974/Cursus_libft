/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icastell <icastell@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 19:37:45 by icastell          #+#    #+#             */
/*   Updated: 2021/04/27 17:49:13 by icastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*ft_lstadd_back() añade el elemento 'new' al final de la lista.
**lst:	dirección del puntero al primer elemento de la lista
*new:	dirección del puntero al elemento que hay que añadir a la lista.*/

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*nodo;

	if (new)
	{
		if (!*lst)
			*lst = new;
		else
		{
			nodo = ft_lstlast(*lst);
			if (nodo)
				nodo -> next = new;
		}
	}
	return ;
}
