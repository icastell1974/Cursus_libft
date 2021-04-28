/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icastell <icastell@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 18:57:48 by icastell          #+#    #+#             */
/*   Updated: 2021/04/26 19:22:06 by icastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*ft_listlast() devuelve el último elemento de la lista. 'lst' apunta al
principio de la lista.*/

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst -> next)
		lst = lst -> next;
	return (lst);
}
