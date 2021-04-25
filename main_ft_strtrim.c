/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strtrim.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icastell <icastell@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 08:44:07 by icastell          #+#    #+#             */
/*   Updated: 2021/04/22 17:49:51 by icastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>

size_t	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

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

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	i = 0;
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	if (!s)
		return (str);
	if (start >= ft_strlen((char *)s))
		return (str);
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_strtrim(char const *s1, char const *set) //esta es mi ft_strtrim. Pasó los test hasta que dejó de pasarlos. :(
{
	size_t	i;
	size_t	index1;
	size_t	index2;
	char	*ptr;

	i = 0;
	if ((!s1) || (!set))
		return (NULL);
	while (ft_memchr(set, s1[i], ft_strlen((char *)set)) != NULL)
		i++;
	index1 = i++;
	i = ft_strlen((char *)s1);
	while (ft_memchr(set, s1[i - 1], ft_strlen((char *)set)) != NULL)
		i--;
	index2 = i;
	if (index1 < index2)
		ptr = ft_substr(s1, index1, index2 - index1);
	else
		ptr = ft_substr(s1, index1, 1);
	return (ptr);
}

int main()
{
	char	*s1;
	char 	s2[] = "";
	char 	*s3;
	char	*res;

	s1 = "          "; //"  \t \t \n   \n\n\n\t";
	s3 = " "; //" \n\t";
	res = ft_strtrim(s1, s3);
	printf("String s1: (%s)\n", s1);
	printf("String s2: <%s>\n", s2);
	printf("String s3: %s\n", s3);
	printf("String res: $%s$\n", res);
	return (0);
}
