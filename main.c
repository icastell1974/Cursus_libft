/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icastell <icastell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 08:44:07 by icastell          #+#    #+#             */
/*   Updated: 2021/04/08 10:42:53 by icastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

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

int	main()
{
	char	src[30] = "Hol crcol uuidfuua";
	char	to_find = '\0';
	char	*temp;
	char	*temp_original;

	printf("String donde hay que buscar: %s\n", src);
	printf("Dirección del string donde hay que buscar: %p\n", src);
	printf("Carácter a buscar: %c\n", to_find);
	temp = ft_strchr(src, to_find);
	temp_original = strchr(src, to_find);
	printf("String encontrado: %s\n", temp);
	printf("Dirección: %p\n", temp);
	printf("String encontrado con función original: %s\n", temp_original);
	printf("Dirección con función original: %p\n", temp_original);
	return (0);
}
