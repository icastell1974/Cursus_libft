/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icastell <icastell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 19:02:01 by icastell          #+#    #+#             */
/*   Updated: 2021/04/16 09:37:10 by icastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*ft_strtrim() reserva memoria (con malloc) y devuelve la cadena de caracteres
que es una copia de s1, sin los caracteres indicados en set al principio y al
final de la cadena de caracteres. Si la reserva de memoria falla
devuelve NULL.*/

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	index1;
	size_t	index2;
	char	*ptr;

	i = 0;
	if ((!s1) || (!set))
		return (NULL);
	while (ft_memchr(set, s1[i], ft_strlen((char *)set)) != NULL)
		i++;
	index1 = i++;
	i = ft_strlen((char *)s1);
	while (ft_memchr(set, s1[i - 1], ft_strlen((char *)set)) != NULL)
		i--;
	index2 = i;
	if (index1 < index2)
		ptr = ft_substr(s1, index1, index2 - index1);
	else
		ptr = ft_substr(s1, index1, 1);
	return (ptr);
}
