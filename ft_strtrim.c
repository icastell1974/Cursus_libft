/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icastell <icastell@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 19:02:01 by icastell          #+#    #+#             */
/*   Updated: 2021/04/22 16:52:46 by icastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*ft_strtrim() reserva memoria (con malloc) y devuelve la cadena de caracteres
que es una copia de s1, sin los caracteres indicados en set al principio y al
final de la cadena de caracteres. Si la reserva de memoria falla
devuelve NULL.*/

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	len = ft_strlen((char *)s1);
	while (len && ft_strchr(set, s1[len]))
		len--;
	return (ft_substr(s1, 0, len + 1));
}
