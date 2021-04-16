/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icastell <icastell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 11:44:01 by icastell          #+#    #+#             */
/*   Updated: 2021/04/16 12:56:48 by icastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The ft_strnstr() function locates the first occurrence of the
null-terminated string to_find in the string str, where not more than len
characters are searched.  Characters that appear after a `\0' character are
not searched. If to_find is an empty string, str is returned; if to_find occurs
nowhere in str, NULL is returned; otherwise a pointer to the first character
of the first occurrence of to_find is returned.*/

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;
	char	*aux;

	i = 0;
	aux = ((char *)str);
	if (to_find[i] == '\0')
		return (aux);
	while ((aux[i] != '\0') && (i < len))
	{
		j = 0;
		while (((i + j) < len) && (to_find[j] != '\0')
			&& (aux[i + j] == to_find[j]))
			j++;
		if (to_find[j] == '\0')
			return (&aux[i]);
		i++;
	}
	return (0);
}
