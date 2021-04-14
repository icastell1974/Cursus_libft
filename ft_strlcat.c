/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icastell <icastell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 20:26:54 by icastell          #+#    #+#             */
/*   Updated: 2021/04/09 10:26:16 by icastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*ft_strlcat() appends string src to the end of dest. It will append at
most size - ft_strlen(dst) - 1 characters.  It will then NUL-terminate,
unless size is 0 or the original dest string was longer than size (in
practice this should not happen as it means that either size is incorrect
or that dest is not a proper string). If the src and dest strings overlap,
the behavior is undefined. Returns the total length of the string
it tried to create; that means the initial length of dest plus the length of
src. If the return value is >= size, the output string has been truncated.*/

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	r;

	i = ft_strlen(dest);
	r = ft_strlen(src);
	j = 0;
	if (size == 0)
		return (r);
	if (size < i)
		r = r + size;
	else
		r = r + i;
	while (src[j] != '\0' && i < size - 1 && dest != src)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (r);
}
