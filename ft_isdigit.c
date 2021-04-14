/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icastell <icastell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 16:17:08 by icastell          #+#    #+#             */
/*   Updated: 2021/04/12 18:13:14 by icastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The ft_isdigit() function tests for a decimal digit character. Returns zero
if the character tests false and return non-zero if the character tests true.*/

#include "libft.h"

int	ft_isdigit(int c)
{
	int	digit;

	if ((c >= '0') && (c <= '9'))
		digit = 1;
	else
		digit = 0;
	return (digit);
}
