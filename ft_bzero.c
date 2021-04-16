/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icastell <icastell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 18:28:25 by icastell          #+#    #+#             */
/*   Updated: 2021/04/16 12:35:08 by icastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The ft_bzero() function writes n zeroed bytes to the string ptr.
If n ismzero, ft_bzero() does nothing.*/

#include "libft.h"

void	ft_bzero(void *ptr, size_t n)
{
	size_t			i;
	unsigned char	*aux;

	if (n != 0)
	{
		aux = (unsigned char *)ptr;
		i = 0;
		while (i < n)
		{
			aux[i] = '\0';
			i++;
		}
	}
	return ;
}
