/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icastell <icastell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 08:26:06 by icastell          #+#    #+#             */
/*   Updated: 2021/04/12 18:01:15 by icastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int ft_atoi(const char *str)
{
    int     i;
    int     numero;
    int     negativo;
    char    *aux;

    i = 0;
    numero = 0;
	negativo = 1;
    aux = (char *)str;
	while ((aux[i] == ' ') || ((aux[i] >= 9) && (aux[i] <= 13)))
			//|| aux[i] == '\v' || aux[i] == '\n' || aux[i] == '\t')
		i++;
	if (aux[i] == '+')
		i++;
	if (aux[i] == '-')
	{
		negativo *= -1;
		i++;
	}
	while (aux[i] >= '0' && aux[i] <= '9')
	{
		numero = numero * 10 + aux[i] - '0';
		i++;
	}
	return (numero * negativo);
}

int main()
{
	char	str[40] = "\t\v\f\r\n \f+\t\v\f\r\n \f1234"; //"+\t\v\f\r\n \f1234";

	printf("string original: %s\n", str);
	printf("atoi original: %d\n", atoi(str));
	printf("atoi mío: %d\n", ft_atoi(str));
	return (0);
}
