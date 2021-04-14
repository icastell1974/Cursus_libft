/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icastell <icastell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 14:00:34 by icastell          #+#    #+#             */
/*   Updated: 2021/04/12 17:35:07 by icastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The ft_atoi() function converts the initial portion of the string
pointed to by str to int representation.*/

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		i;
	int		numero;
	int		negativo;
	char	*aux;

	i = 0;
	numero = 0;
	negativo = 1;
	aux = (char *)str;
	while (aux[i] == ' ' || aux[i] == '\r' || aux[i] == '\f'
			|| aux[i] == '\v' || aux[i] == '\n' || aux[i] == '\t')
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
