/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icastell <icastell@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 18:05:59 by icastell          #+#    #+#             */
/*   Updated: 2021/04/20 20:51:29 by icastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*ft_strmapi() applies the function 'f' to each character of the string 's'
to create a new string of characters resulting from successive
applications of 'f'.*/

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	len;
	char	*str;

	i = 0;
	if (!s || !f)
		return (NULL);
	len = ft_strlen((char *)s);
	str = ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	while (i < len)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	return (str);
}
