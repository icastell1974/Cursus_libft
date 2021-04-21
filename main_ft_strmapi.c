/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strmapi.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icastell <icastell@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 18:05:59 by icastell          #+#    #+#             */
/*   Updated: 2021/04/20 20:55:27 by icastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*ft_strmapi() applies the function 'f' to each character of the string 's'
to create a new string of characters resulting from successive
applications of 'f'.*/

#include "libft.h"

size_t	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_bzero(void *ptr, size_t n)
{
	size_t			i;
	unsigned char	*aux;

	if (n != 0)
	{
		aux = (unsigned char *)ptr;
		i = 0;
		while (i < n)
		{
			aux[i] = '\0';
			i++;
		}
	}
	return ;
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*str;

	str = malloc(count * size);
	if (!str)
		return (NULL);
	ft_bzero(str, count * size);
	return (str);
}


char	ft_tolowerrrr(unsigned int i, char c)
{
	char	z;

	i = 0;
	z = c + 32;
	return (z);
}

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

int main()
{
	char 	str[] = "ABCDEF";
	char	*ptr;

	printf("string original: ¡%s!\n", str);
	ptr = ft_strmapi(str, &ft_tolowerrrr);
	printf("string nuevo: ¡%s!\n", ptr);
	return (0);
}