/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_memchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icastell <icastell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 08:44:07 by icastell          #+#    #+#             */
/*   Updated: 2021/04/14 17:27:13 by icastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*aux;
	unsigned char	caracter;

	aux = (unsigned char *)str;
	caracter = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (aux[i] == caracter)
			return (aux + i);
		i++;
	}
	return (0);
}

int	main()
{
	//char	src[10] = "uuuuabn";
	//char	to_find[10] = "\0";
	char	*src = "/|\x12\xff\x09\x42\042\42|\\"; //"see FF your FF return FF now FF"; //"MZIRIBMZIRIBMZE123"; //
	char	*temp;
	char	*temp_original;
	size_t	max;
	int		c;

	c = '\0';
	printf("String donde hay que buscar: %s\n", src);
	printf("Dirección: %p\n", src);
	printf("Carácter a buscar: %c\n", c);
	max = strlen(src);
	printf("Longitud de la cadena donde buscar: %zu\n", max);
	temp = ft_memchr(src, c, 12);
	temp_original = memchr(src, c, 12);
	printf("String encontrado: %s\n", temp);
	printf("Dirección: %p\n", temp);
	printf("String encontrado con función original: %s\n", temp_original);
	printf("Dirección con función original: %p\n", temp_original);
	return (0);
}
