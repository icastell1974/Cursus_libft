/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icastell <icastell@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 14:19:14 by icastell          #+#    #+#             */
/*   Updated: 2021/04/28 18:54:55 by icastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*ft_substr() reserva memoria (con malloc) y devuelve la cadena de caracteres
que proviene de la cadena s. Esta nueva cadena comienza en el índice start y
tiene como tamaño máximo len. Si la reserva de memoria falla devuelve NULL.*/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	longitud;
	char	*str;

	i = 0;
	if (!s)
		return (NULL);
	longitud = ft_strlen((char *)s);
	if (start >= longitud)
		return (ft_calloc(1, sizeof(char)));
	if ((len + start) > longitud)
		len = longitud - start;
	str = ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
