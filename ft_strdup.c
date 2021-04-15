/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icastell <icastell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 12:50:12 by icastell          #+#    #+#             */
/*   Updated: 2021/04/15 14:05:59 by icastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The ft_strdup() function allocates sufficient memory for a copy of the
string str, does the copy, and returns a pointer to it. The pointer may
subsequently be used as an argument to the function free. If insufficient
memory is available, NULL is returned and errno is set to ENOMEM.*/

#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	longitud;
	char	*ptr;

	longitud = 0;
	while (str[longitud] != '\0')
		longitud++;
	ptr = malloc(longitud + 1);
	if (!ptr)
		return (NULL);
	ptr = ft_memcpy(ptr, str, longitud + 1);
	return (ptr);
}
