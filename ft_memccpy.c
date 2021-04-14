/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icastell <icastell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 12:45:47 by icastell          #+#    #+#             */
/*   Updated: 2021/04/14 13:15:59 by icastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The ft_memccpy() function copies bytes from string src to string dst.
If the character c (as converted to an unsigned char) occurs in the string
src, the copy stops and a pointer to the byte after the copy of c
in the string dst is returned. Otherwise, n bytes are copied, and a
NULL pointer is returned.*/

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*aux1;
	unsigned char	*aux2;
	unsigned char	caracter;

	aux1 = (unsigned char *)src;
	aux2 = (unsigned char *)dst;
	caracter = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		aux2[i] = aux1[i];
		if (aux2[i] == caracter)
			return (aux2 + i + 1);
		i++;
	}
	return (0);
}
