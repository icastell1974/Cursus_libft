/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strjoin.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icastell <icastell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 18:08:54 by icastell          #+#    #+#             */
/*   Updated: 2021/04/15 18:09:40 by icastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdio.h>
# include <string.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	long1;
	size_t	long2;
	char	*str;

	i = 0;
	//long1 = ft_strlen((char *)s1);
	//long2 = ft_strlen((char *)s2);
	long1 = strlen((char *)s1);
	printf("longitud s1: %zu\n", long1);
	long2 = strlen((char *)s2);
	printf("longitud s2: %zu\n", long2);
	str = malloc(long1 + long2 + 1);
	if (!str)
		return (NULL);
	if ((!s1) && (!s2))
		return (str);
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[i - long1] != '\0')
	{
		str[i] = s2[i - long1];
		i++;
	}
	str[i] = '\0';
	return (str);
}

int main()
{
	char	*s1;
	char 	s2[] = " ";
	char 	*s3;
	char	*res;

	s1 = "my favorite animal is";
	s3 = "the nyancat";
	res = ft_strjoin(ft_strjoin(s1, s2), s3);
	printf("String s1: %s\n", s1);
	printf("String s2: %s\n", s2);
	printf("String s3: %s\n", s3);
	printf("String res: %s\n", res);
	return (0);
}