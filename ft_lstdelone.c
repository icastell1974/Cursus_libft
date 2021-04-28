/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icastell <icastell@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 17:17:26 by icastell          #+#    #+#             */
/*   Updated: 2021/04/27 18:26:57 by icastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*ft_lstdelone() libera memoria del elemento pasado como argumento utilizando
la función 'del' y después free(). No se debe liberar la memoria de 'next'.
*lst:    elemento cuya memoria se debe liberar
*del:    dirección de una función utilizada para borrar el contendio del
		elemento.*/

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	t_list	*nodo;

	if (lst)
	{
		if (del)
		{
			nodo = lst;
			lst = lst -> next;
			del(nodo -> content);
			free(nodo);
			nodo = NULL;
		}
	}
	return ;
}
