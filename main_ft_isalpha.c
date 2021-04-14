/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_isalpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icastell <icastell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 11:41:12 by icastell          #+#    #+#             */
/*   Updated: 2021/04/08 16:10:48 by icastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int	ft_isalpha(int c)
{
	int	alpha;

	if ((c < 65) || ((c >= 91) && (c <= 96)) || (c > 122))
		alpha = 0;
	else alpha = 1;
	return (alpha);
}

int	main()
{
	int		cad_alphabetica;
	int		c;

	c = 'K';
	printf("Valor a chequear: %c\n", c);
	cad_alphabetica = ft_isalpha(c);
	printf("¿Es valor alfabético (mi función)? %d\n", cad_alphabetica);
	cad_alphabetica = isalpha(c);
	printf("¿Es valor alfabético (original)? %d\n", cad_alphabetica);
	return (0);
}
