/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icastell <icastell@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 19:54:36 by icastell          #+#    #+#             */
/*   Updated: 2021/04/25 20:27:30 by icastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*ft_listnew() reserva memoria (con malloc) y devuelve un nuevo elemento.
La variable 'content' se inicializ mediante el valor del parémetro 'content'.
La variable 'next' se inicializa a NULL.*/

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*nodo;

	nodo = malloc(sizeof(t_list));
	if (nodo)
	{
		nodo -> content = content;
		nodo -> next = NULL;
	}
	return (nodo);
}
