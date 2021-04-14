/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_isprint.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icastell <icastell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 17:05:56 by icastell          #+#    #+#             */
/*   Updated: 2021/04/08 17:09:47 by icastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int	ft_isprint(int c)
{
	int	print;

	if ((c < 32) || (c > 126))
		print = 0;
	else print = 1;
	return (print);
}

int	main()
{
	int		cad_alphabetica;
	int		c;

	//c = '7';
    c = 108;
	printf("Valor a chequear: %c\n", c);
	cad_alphabetica = ft_isprint(c);
	printf("¿Es imprimible (mi función)? %d\n", cad_alphabetica);
	cad_alphabetica = isprint(c);
	printf("¿Es imprimible (original)? %d\n", cad_alphabetica);
	return (0);
}