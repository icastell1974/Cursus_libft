/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strlcpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icastell <icastell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 08:44:07 by icastell          #+#    #+#             */
/*   Updated: 2021/04/13 18:45:43 by icastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strlcpy(char *dest, char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;//tamano_source;

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
			/*if (i == size - 1)
				dest[i] = '\0';
			else*/
				dest[i] = src[i];
			i++;
		}
		/*if (i < size)*/
			dest[i] = '\0';
	}
	return (j);
}

int	main()
{
	char	src[] = "the cake is a lie !\0I'm hidden lol\r\n"; //"aaaaaaasg";
	char	dest[] = "AAAAAAAAAAAAAAAAAAA"; //"aaaa";

	printf("String original: %s\n", src);
	printf("Función original: %zu\n", strlcpy(dest, src, 11));
	printf("String copiado con la original: %s\n", dest);
	printf("Función mía: %zu\n", ft_strlcpy(dest, src, 11));
	printf("Lo que hay en dest después de 0 %c\n", dest[13]);
	printf("String copiado con la mi función: %s\n", dest);
	return (0);
}
