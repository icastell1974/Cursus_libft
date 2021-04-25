/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icastell <icastell@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 20:19:01 by icastell          #+#    #+#             */
/*   Updated: 2021/04/25 20:28:14 by icastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*ft_listsize() cuenta el número de elementos de una lista. 'lst' apunta
al principio de la lista.*/

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		i++;
		lst = lst -> next;
	}
	return (i);
}
