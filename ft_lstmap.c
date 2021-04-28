/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icastell <icastell@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 18:51:50 by icastell          #+#    #+#             */
/*   Updated: 2021/04/27 19:32:35 by icastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*ft_lstmap() realiza una iteración sobre la lista 'lst' y aplica
la función 'f' al contenido de cada elemento. Crea una nueva lista que
resulta de las aplicaciones sucesivas de 'f'. Disponemos de la función
'del' si hay que eliminar el contenido de algún elemento.
*lst:	dirección del puntero a un elemento
*f:		dirección de la función que hay que aplicar
*del:	dirección de la función que hay que aplicar sobre un
		elemento para borrar 'content', si es necesario.*/

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*aux;
	t_list	*nodo;

	aux = NULL;
	if (lst && f)
	{
		while (lst != NULL)
		{
			nodo = ft_lstnew(f(lst -> content));
			if (nodo == NULL)
			{
				ft_lstclear(&aux, del);
				return (NULL);
			}
			ft_lstadd_back(&aux, nodo);
			lst = lst -> next;
		}
	}
	return (aux);
}
