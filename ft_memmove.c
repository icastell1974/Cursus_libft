/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icastell <icastell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 13:14:12 by icastell          #+#    #+#             */
/*   Updated: 2021/04/14 17:01:06 by icastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The ft_memmove() function copies n bytes from string src to string dst.
The two strings may overlap; the copy is always done in a non-destructive
manner. Returns the original value of dst.*/

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*aux1;
	unsigned char	*aux2;

	i = 0;
	aux1 = (unsigned char *)src;
	aux2 = (unsigned char *)dst;
	if (dst == src)
		return (dst);
	if (dst > src)
	{
		while (n--)
			aux2[n] = aux1[n];
	}
	else
	{
		while (i < n)
		{
			aux2[i] = aux1[i];
			i++;
		}
	}
	return (dst);
}
