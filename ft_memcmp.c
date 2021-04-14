/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icastell <icastell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 17:31:18 by icastell          #+#    #+#             */
/*   Updated: 2021/04/14 17:51:12 by icastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The ft_memcmp() compares byte string s1 against byte string s2. Both
strings are assumed to be n bytes long. Returns zero if the two strings are
identical, otherwise returns the difference between the first two differing
bytes (treated as unsigned char values, so that `\200' is greater than `\0').
Zero length strings are always identical.*/

#include "libft.h"

int	ft_memcmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*aux1;
	unsigned char	*aux2;

	i = 0;
	aux1 = (unsigned char *)s1;
	aux2 = (unsigned char *)s2;
	while (i < n)
	{
		if (aux1[i] != aux2[i])
			return (aux1[i] - aux2[i]);
		i++;
	}
	if (i != n)
		return (aux1[i] - aux2[i]);
	return (0);
}
