/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icastell <icastell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 19:39:02 by icastell          #+#    #+#             */
/*   Updated: 2021/04/16 12:55:04 by icastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*ft_strlcpy() copies up to size - 1 characters from the string src to dest,
NUL-terminating the result if size is not 0. If the src and dest strings
overlap, the behavior is undefined. Returns the length of src.*/

#include "libft.h"

size_t	ft_strlcpy(char *dest, char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;

	if (!src || !dest)
		return (0);
	j = 0;
	while (src[j] != '\0')
		j++;
	i = 0;
	if (size != 0)
	{
		while (i < (size - 1) && (src[i] != '\0'))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (j);
}
