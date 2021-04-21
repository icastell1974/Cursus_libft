/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_itoa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idoyacastellsportal <idoyacastellsporta    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 19:22:55 by idoyacastel       #+#    #+#             */
/*   Updated: 2021/04/20 17:53:13 by idoyacastel      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>

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

char	ft_getdigit(long int n)
{
	size_t	digit;

	digit = n % 10;
	return (digit + '0');
}


void	ft_strset(char *str, size_t len, int n)
{
	size_t	i;
	long int		nb;

	i = 0;
	nb = n;
	if (nb < 0)
	{
		while (i < len)
		{
			str[len - (i++)] = ft_getdigit(nb * -1);
			nb = nb / 10;
		}
	}
	else
	{
		while (i < len)
		{
			str[len - (++i)] = ft_getdigit(nb);
			nb = nb / 10;
		}
	}
	return ;
}

size_t	ft_lenint(int n)
{
	size_t	i;
	long int		nb;

	i = 1;
	nb = n;
	if (nb < 0)
		nb = nb * -1;
	while (nb >= 10)
	{	
		nb = nb / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	size_t	len;
	size_t	i;
	char	*str;

	i = 0;
	len = ft_lenint(n);
	if (n < 0)
	{
		str = ft_calloc(len + 2, sizeof(char));
		if (!str)
			return (NULL);
		str[0] = '-';
	}
	else
	{
		str = ft_calloc(len + 1, sizeof(char));
		if (!str)
			return (NULL);
	}
	ft_strset(str, len, n);
	return (str);
}


int main()
{
	char	*str;

	str = ft_itoa(-2147483648);
	printf("string creado: ¿%s?\n", str);
	return (0);
}
