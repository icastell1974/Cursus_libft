/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_isdigit.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icastell <icastell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 16:19:47 by icastell          #+#    #+#             */
/*   Updated: 2021/04/08 16:38:01 by icastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int	ft_isdigit(int c)
{
	int	digit;

	if ((c < 48) || (c > 58))
		digit = 0;
	else digit = 1;
	return (digit);
}

int	main()
{
	int		cad_alphabetica;
	int		c;

	c = '7';
	printf("Valor a chequear: %c\n", c);
	cad_alphabetica = ft_isdigit(c);
	printf("¿Es valor numérico (mi función)? %d\n", cad_alphabetica);
	cad_alphabetica = isdigit(c);
	printf("¿Es valor numérico (original)? %d\n", cad_alphabetica);
	return (0);
}