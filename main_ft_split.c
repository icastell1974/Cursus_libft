/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_split.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icastell <icastell@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 08:44:07 by icastell          #+#    #+#             */
/*   Updated: 2021/04/25 11:39:28 by icastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>

static void	ft_bzero(void *ptr, size_t n)
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

static void	*ft_calloc(size_t count, size_t size)
{
	void	*str;

	str = malloc(count * size);
	if (!str)
		return (NULL);
	ft_bzero(str, count * size);
	return (str);
}


static void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*aux1;
	unsigned char	*aux2;

	if (!src && !dst)
		return (dst);
	aux1 = (unsigned char *)src;
	aux2 = (unsigned char *)dst;
	printf("string original: %s\n", aux1);
	i = 0;
	printf("n: %zu\n", n);
	while (n--)
	{
		//printf("índice y carácter original: %zu, %c\n", i, aux1[i]);
		aux2[i] = aux1[i];
		//printf("índice y carácter copiado: %zu, %c\n", i, aux2[i]);
		i++;
	}
	printf("string troceado: %s\n", aux2);
	return (dst);
}

static size_t	ft_numdelimitador(char const *s, char c)
{
	size_t	i;
	size_t	j;
	char	*aux;

	i = 0;
	j = 0;
	aux = (char *)s;
	while (aux[i] != '\0')
	{
		if ((aux[i] == c) && (aux[i + 1] != c))
			j++;
		i++;
	}
	return (j);
}

static char	**ft_writesplit(char **temp, char *s, char c)
{
	size_t	i;
	char	*aux1;
	char	*aux2;

	i = 0;
	aux1 = s;
	aux2 = aux1;
	while (*aux1)
	{
		while (*aux1 == c)
			aux1++;
		aux2 = aux1;
		while ((*aux2) && (*aux2 != c))
			aux2++;
		if (aux1 == aux2)
			break ;
		temp[i] = ft_calloc((aux2 - aux1 + 1), sizeof(char));
		ft_memcpy(temp[i], aux1, aux2 - aux1);
		aux1 =  aux2;
		i++;
	}
	temp[i] = NULL;
	return (temp);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	numdelimitador;
	char	**temp;

	i = 0;
	if (!s)
		return (NULL);
	numdelimitador = ft_numdelimitador(s, c);
	printf("Número de delimitadores: %zu\n", numdelimitador);
	if (!numdelimitador)
		return (NULL);
	temp =  ft_calloc(numdelimitador + 1, sizeof(char *));
	if (!temp)
		return (NULL);
	return (ft_writesplit(temp, (char *)s, c));
}

int	main()
{
	char	src[100] = "lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse"; //"1234,567,,89"; //"Hol crcol uuidfuua";
	char	delimitador = ' '; //'\0';
	char	**temp;
	//char	**temp_original;
	size_t	i;

	i = 0;
	printf("String donde hay que buscar: %s\n", src);
	printf("Dirección del string donde hay que buscar: %p\n", src);
	printf("Delimitador: (%c(\n", delimitador);
	temp = ft_split(src, delimitador);
	while (temp[i])
	{
		printf("String y posición: %p, %zu\n", temp[i], i);
		printf("String y posición: %s, %zu\n", temp[i], i);
		i++;
	}
	//temp_original = split(src, delimitador);
	//i = 0;
	//while (temp_original[i])
		//printf("String original y posición: %s, %zu\n", temp_original[i], i);
	//printf("String encontrado: %s\n", temp);
	//printf("Dirección: %p\n", temp);
	/*printf("String encontrado con función original: %s\n", temp_original);
	printf("Dirección con función original: %p\n", temp_original);*/
	return (0);
}
