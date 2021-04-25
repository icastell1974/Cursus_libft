/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icastell <icastell@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 08:44:07 by icastell          #+#    #+#             */
/*   Updated: 2021/04/21 17:31:23 by icastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int main()
{
	char	*s1;
	char 	s2[] = "";
	char 	*s3;
	char	*res;

	s1 = "  \t \t \n   \n\n\n\t";
	s3 = " \n\t";
	//res = ft_strtrim(s1, s3);
	printf("String s1: (%s)\n", s1);
	printf("String s2: <%s>\n", s2);
	printf("String s3: %s\n", s3);
	printf("String res: $%s$\n", res);
	return (0);
}
