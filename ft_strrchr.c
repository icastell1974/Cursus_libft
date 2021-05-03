/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icastell <icastell@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 10:53:53 by icastell          #+#    #+#             */
/*   Updated: 2021/05/03 10:12:07 by icastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The ft_strrchr() function locates the last occurrence of c (converted to
a char) in the string pointed to by str.  The terminating null character is
considered to be part of the string; therefore if c is `\0', the functions
locate the terminating `\0'. Returns a pointer to the located character,
or NULL if the character does not appear in the string.*/

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*aux;
	char	*aux_2;

	i = 0;
	aux = (char *)str;
	aux_2 = NULL;
	while (aux[i] != '\0')
	{
		if (aux[i] == (char)c)
			aux_2 = &aux[i];
		i++;
	}
	if (aux[i] == c)
		return (&aux[i]);
	else
		return (aux_2);
}
