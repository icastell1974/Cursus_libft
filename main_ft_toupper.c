/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_toupper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icastell <icastell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 17:40:26 by icastell          #+#    #+#             */
/*   Updated: 2021/04/08 17:44:45 by icastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int	ft_toupper(int c)
{
	int	upper;

    upper = c;
    if ((c >= 97) && (c <= 122))
	    upper = upper - 32;
	return (upper);
}

int	main()
{
	int		cad_alphabetica;
	int		c;

	c = 'O'; 
	printf("Valor a chequear: %c\n", c);
	cad_alphabetica = ft_toupper(c);
	printf("¿Mayúscula (mi función)? %c\n", cad_alphabetica);
	cad_alphabetica = toupper(c);
	printf("¿Mayúscula (original)? %c\n", cad_alphabetica);
	return (0);
}