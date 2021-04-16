/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icastell <icastell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 17:55:31 by icastell          #+#    #+#             */
/*   Updated: 2021/04/16 12:29:52 by icastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The ft_memset() function writes n bytes of value x (converted to an
unsigned char) to the string ptr. Returns its first argument.*/

#include "libft.h"

void	*ft_memset(void *ptr, int x, size_t n)
{
	size_t			i;
	unsigned char	*aux;

	aux = (unsigned char *)ptr;
	i = 0;
	while (i < n)
	{
		aux[i] = (unsigned char)x;
		i++;
	}
	return (ptr);
}
