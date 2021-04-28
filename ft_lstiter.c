/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icastell <icastell@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 18:40:51 by icastell          #+#    #+#             */
/*   Updated: 2021/04/27 18:50:41 by icastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*ft_lstiter() realiza una iteración sobre la lista 'lst' y aplica
la función 'f' al contenido de cada elemento.
*lst:	dirección del puntero a un elemento
*f:		dirección de la función que hay que aplicar.*/

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*nodo;

	if (lst)
	{
		nodo = lst;
		if (f)
		{
			while (nodo)
			{
				f(nodo -> content);
				nodo = nodo -> next;
			}
		}
	}
	return ;
}
