/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icastell <icastell@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 17:42:05 by icastell          #+#    #+#             */
/*   Updated: 2021/04/27 18:30:30 by icastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*ft_lstclear() suprime y libera memoria del elemento pasado como parámetro
y de todos los elementos siguiente con la función 'del' y después free().
El puntero inicial debe pasar a NULL.
**lst:	dirección del puntero a un elemento
*del:	dirección de la función que permite suprimir el contendio de un
		elemento.*/

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*nodo;

	if (*lst)
	{
		if (del)
		{
			nodo = *lst;
			while (*lst)
			{
				nodo = (*lst)->next;
				ft_lstdelone(*lst, del);
				(*lst) = nodo;
			}
		}
	}
	return ;
}
