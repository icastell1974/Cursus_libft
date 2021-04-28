/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icastell <icastell@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 18:30:50 by icastell          #+#    #+#             */
/*   Updated: 2021/04/26 18:55:11 by icastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*ft_lstadd_front() añade el elemento 'new' al principio de la lista.
**alst: dirección del puntero al primer elemento de la lista
*new:   dirección del punntero al elemento que hay que añadir a la lista.*/

#include "libft.h"

void	ft_lstadd_front(t_list **alst, t_list *new)
{
	if (new)
	{
		if (alst)
		{
			new -> next = *alst;
			*alst = new;
		}
	}
	return ;
}
