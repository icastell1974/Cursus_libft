/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strncmp.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icastell <icastell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 08:44:07 by icastell          #+#    #+#             */
/*   Updated: 2021/04/12 17:31:54 by icastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	unsigned char	*aux1;
	unsigned char	*aux2;

	i = 0;
	aux1 = (unsigned char *)s1;
	aux2 = (unsigned char *)s2;
	while ((i < n) && (aux1[i] != '\0') && (aux2[i] != '\0'))
	{
		if (aux1[i] != aux2[i])
			return (aux1[i] - aux2[i]);
		i++;
	}
	if (i != n)
		return (aux1[i] - aux2[i]);
	return (0);
}

int	main()
{
	char	src[] = "\200"; //"aaaaaaasg";
	char	dest[] = "\0"; //"aaaa";

	printf("String original: %s\n", src);
	printf("Diferencia: %d\n", strncmp(src, dest, 1));
	printf("Diferencia mía: %d\n", ft_strncmp(src, dest, 1));
	return (0);
}
