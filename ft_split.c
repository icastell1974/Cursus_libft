/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icastell <icastell@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 17:30:24 by icastell          #+#    #+#             */
/*   Updated: 2021/04/25 12:09:08 by icastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*ft_split() reserva memoria (con malloc) y devuelve una tabla de cadena
de caracteres obtenida separando 's' con el carácter 'c', que se utiliza
como delimitador. La tabla debe terminar con NULL.*/

#include "libft.h"

static size_t	ft_numdelimitador(char const *s, char c)
{
	size_t	i;
	size_t	j;
	char	*aux;

	i = 0;
	j = 1;
	aux = (char *)s;
	while (aux[i] != '\0')
	{
		if ((aux[i] == c) || !(aux[i + 1]))
			if (aux[i + 1] != c)
				j++;
		i++;
	}
	return (j);
}

static char	**ft_writesplit(char **temp, char *s, char c)
{
	size_t	i;
	char	*aux1;
	char	*aux2;

	i = 0;
	aux1 = s;
	aux2 = aux1;
	while (*aux1)
	{
		while (*aux1 == c)
			aux1++;
		aux2 = aux1;
		while ((*aux2) && (*aux2 != c))
			aux2++;
		if (aux1 == aux2)
			break ;
		temp[i] = ft_calloc((aux2 - aux1 + 1), sizeof(char));
		ft_memcpy(temp[i], aux1, aux2 - aux1);
		aux1 = aux2;
		i++;
	}
	temp[i] = NULL;
	return (temp);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	numdelimitador;
	char	**temp;

	i = 0;
	if (!s)
		return (NULL);
	numdelimitador = ft_numdelimitador(s, c);
	if (!numdelimitador)
		return (NULL);
	temp = ft_calloc(numdelimitador, sizeof(char *));
	if (!temp)
		return (NULL);
	return (ft_writesplit(temp, (char *)s, c));
}
