/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcdup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icastell <icastell@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 18:16:24 by icastell          #+#    #+#             */
/*   Updated: 2021/05/26 18:35:10 by icastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The ft_strcdup() function allocates sufficient memory for a copy of the
string s, does the copy until c (converted to a char), and returns a pointer
to it. The pointer may subsequently be used as an argument to the function
free. If insufficient memory is available, NULL is returned and errno is
set to ENOMEM.*/

#include "libft.h"

char	*ft_strcdup(const char *s, int c)
{
	char	*p;
	ssize_t	i;

	i = 0;
	while ((s[i] != (char)c) && (s[i] != '\0'))
		i++;
	p = (char *)malloc(sizeof(char) * (i + 1));
	if (!p)
		return (0);
	p[i] = '\0';
	while (i-- > 0)
		p[i] = s[i];
	return (p);
}
