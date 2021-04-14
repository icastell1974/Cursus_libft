/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_tolower.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icastell <icastell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 17:49:26 by icastell          #+#    #+#             */
/*   Updated: 2021/04/08 17:52:30 by icastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int	ft_tolower(int c)
{
	int	lower;

    lower = c;
    if ((c >= 65) && (c <= 90))
	    lower = lower + 32;
	return (lower);
}

int	main()
{
	int		cad_alphabetica;
	int		c;

	c = 'S'; 
	printf("Valor a chequear: %c\n", c);
	cad_alphabetica = ft_tolower(c);
	printf("¿Minúscula (mi función)? %c\n", cad_alphabetica);
	cad_alphabetica = tolower(c);
	printf("Minúscula (original)? %c\n", cad_alphabetica);
	return (0);
}