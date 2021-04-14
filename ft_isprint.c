/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icastell <icastell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 17:04:11 by icastell          #+#    #+#             */
/*   Updated: 2021/04/09 09:42:03 by icastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The ft_sprint() function tests for any printing character, including
space (` '). Returns zero if the character tests false and returns
non-zero if the character tests true.*/

#include "libft.h"

int	ft_isprint(int c)
{
	int	print;

	if ((c < 32) || (c > 126))
		print = 0;
	else
		print = 1;
	return (print);
}
