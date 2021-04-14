/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icastell <icastell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 13:38:39 by icastell          #+#    #+#             */
/*   Updated: 2021/04/12 17:32:53 by icastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The ft_strncmp() function lexicographically compares the null-terminated
strings s1 and s2. Compares not more than n characters. Characters that appear
after a `\0' character are not compared. Returns an integer greater than,
equal to, or less than 0, according as the string s1 is greater than,
equal to, or less than the string s2.  The comparison is done using unsigned
characters, so that `\200' is greater than `\0'.*/

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	unsigned char	*aux1;
	unsigned char	*aux2;

	i = 0;
	aux1 = (unsigned char *)s1;
	aux2 = (unsigned char *)s2;
	while ((i < n) && (aux1[i] != '\0') && (aux2[i] != '\0'))
	{
		if (aux1[i] != aux2[i])
			return (aux1[i] - aux2[i]);
		i++;
	}
	if (i != n)
		return (aux1[i] - aux2[i]);
	return (0);
}
