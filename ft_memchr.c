/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icastell <icastell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 17:03:54 by icastell          #+#    #+#             */
/*   Updated: 2021/04/14 17:27:35 by icastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The ft_memchr() function searches for the first occurrence of c (converted to
an unsigned char) in the first n bytes of string str. Returns a pointer to the
matching byte or NULL if the character does not occur in the given memory
area.*/

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*aux;
	unsigned char	caracter;

	aux = (unsigned char *)str;
	caracter = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (aux[i] == caracter)
			return (aux + i);
		i++;
	}
	return (0);
}
