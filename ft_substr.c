/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icastell <icastell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 14:19:14 by icastell          #+#    #+#             */
/*   Updated: 2021/04/15 16:17:54 by icastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*ft_substr() reserva memoria (con malloc) y devuelve la cadena de caracteres
que proviene de la cadena s. Esta nueva cadena comienza en el índice start y
tiene como tamaño máximo len. Si la reserva de memoria falla devuelve NULL.*/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	i = 0;
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	if (!s)
		return (str);
	if (start >= ft_strlen((char *)s))
		return (str);
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
