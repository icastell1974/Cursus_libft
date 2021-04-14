/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strnstr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icastell <icastell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 08:44:07 by icastell          #+#    #+#             */
/*   Updated: 2021/04/13 10:24:42 by icastell         ###   ########.fr       */
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

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;
	//size_t	longitud;
	char	*aux;
	//char	*aux_to_find;

	i = 0;
	aux = ((char *)str);
	//aux_to_find = (char *)to_find;
	//longitud = len - ft_strlen(aux_to_find);
	if (to_find[i] == '\0')
		return (aux);
	while ((aux[i] != '\0') && (i < len))
		{
			j = 0;
			while (((i + j) < len) && (to_find[j] != '\0')
				&& (aux[i + j] == to_find[j]))
				j++;
			if (to_find[j] == '\0')
					return (&aux[i]);
			i++;
		}
	return (0);
}

int	main()
{
	//char	src[10] = "uuuuabn";
	//char	to_find[10] = "\0";
	char	*src = "AAAAAAAAAAAAA"; //"see FF your FF return FF now FF"; //"MZIRIBMZIRIBMZE123"; //
	char	*to_find = "FF"; //"MZIRIBMZE";
	char	*temp;
	char	*temp_original;
	size_t	max;

	printf("String donde hay que buscar: %s\n", src);
	printf("Dirección: %p\n", src);
	printf("String a buscar: %s\n", to_find);
	printf("Dirección: %p\n", to_find);
	max = strlen(src);
	printf("Longitud de la cadena a buscar: %zu\n", max);
	temp = ft_strnstr(src, src, max);
	temp_original = strnstr(src, src, max);
	printf("String encontrado: %s\n", temp);
	printf("Dirección: %p\n", temp);
	printf("String encontrado con función original: %s\n", temp_original);
	printf("Dirección con función original: %p\n", temp_original);
	return (0);
}
