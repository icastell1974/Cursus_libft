/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icastell <icastell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 20:57:09 by icastell          #+#    #+#             */
/*   Updated: 2021/04/09 10:15:55 by icastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The ft_strchr() function locates the first occurrence of c (converted to
a char) in the string pointed to by str.  The terminating null character is
considered to be part of the string; therefore if c is `\0', the functions
locate the terminating `\0'. Returns a pointer to the located character,
or NULL if the character does not appear in the string.*/

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int		i;
	char	*aux;

	i = 0;
	aux = (char *)str;
	while (aux[i] != '\0')
	{
		if (aux[i] == c)
			return (&aux[i]);
		i++;
	}
	if (aux[i] == c)
		return (&aux[i]);
	else
		return (0);
}
