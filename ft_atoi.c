/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icastell <icastell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 14:00:34 by icastell          #+#    #+#             */
/*   Updated: 2021/04/16 12:53:58 by icastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The ft_atoi() function converts the initial portion of the string
pointed to by str to int representation.*/

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		i;
	long	numero;
	int		negativo;

	i = 0;
	numero = 0;
	negativo = 1;
	while ((str[i] == ' ') || ((str[i] >= 9) && (str[i] <= 13)))
		i++;
	if ((str[i] == '-') || (str[i] == '+'))
	{
		if (str[i] == '-')
			negativo *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (numero * negativo > 2147483647)
			return (-1);
		if (numero * negativo < -2147483648)
			return (0);
		numero = numero * 10 + str[i] - '0';
		i++;
	}
	return (numero * negativo);
}
