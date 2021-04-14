/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icastell <icastell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 16:46:54 by icastell          #+#    #+#             */
/*   Updated: 2021/04/09 09:43:24 by icastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The ft_isascii() function tests for an ASCII character, which is any
character between 0 and decimal 127 inclusive.*/

#include "libft.h"

int	ft_isascii(int c)
{
	int	ascii;

	if ((c < 0) || (c > 127))
		ascii = 0;
	else
		ascii = 1;
	return (ascii);
}
