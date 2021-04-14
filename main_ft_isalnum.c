/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_isalnum.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icastell <icastell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 16:36:07 by icastell          #+#    #+#             */
/*   Updated: 2021/04/08 16:42:20 by icastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int	ft_isalnum(int c)
{
	int	alnum;

	if ((c < 48) || ((c >= 58) && (c < 65)) || ((c >= 91) && (c <= 96)) || (c > 122))
		alnum = 0;
	else alnum = 1;
	return (alnum);
}

int	main()
{
	int		cad_alphabetica;
	int		c;

	c = 'Y';
	printf("Valor a chequear: %c\n", c);
	cad_alphabetica = ft_isalnum(c);
	printf("¿Es valor alfanumérico (mi función)? %d\n", cad_alphabetica);
	cad_alphabetica = isalnum(c);
	printf("¿Es valor alfanumérico (original)? %d\n", cad_alphabetica);
	return (0);
}