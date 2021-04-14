/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_isascii.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icastell <icastell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 16:50:10 by icastell          #+#    #+#             */
/*   Updated: 2021/04/08 16:54:12 by icastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int	ft_isascii(int c)
{
	int	ascii;

	if ((c < 0) || (c > 127))
		ascii = 0;
	else ascii = 1;
	return (ascii);
}

int	main()
{
	int		cad_alphabetica;
	int		c;

	//c = '7';
    c = 126;
	printf("Valor a chequear: %c\n", c);
	cad_alphabetica = ft_isascii(c);
	printf("¿Es número ascii (mi función)? %d\n", cad_alphabetica);
	cad_alphabetica = isascii(c);
	printf("¿Es número ascii (original)? %d\n", cad_alphabetica);
	return (0);
}