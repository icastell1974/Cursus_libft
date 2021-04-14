/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icastell <icastell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 14:27:51 by icastell          #+#    #+#             */
/*   Updated: 2021/04/09 09:54:39 by icastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The function ft_isalpha() checks if the character is alphabetic. Returns zero
if the character tests false and returns non-zero if the character tests
true.*/

#include "libft.h"

int	ft_isalpha(int c)
{
	int	alpha;

	if ((c < 65) || ((c >= 91) && (c <= 96)) || (c > 122))
		alpha = 0;
	else
		alpha = 1;
	return (alpha);
}
