/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icastell <icastell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 17:47:21 by icastell          #+#    #+#             */
/*   Updated: 2021/04/09 09:32:10 by icastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*If the argument is an upper-case letter, the ft_tolower() function returns
the corresponding lower-case letter if there is one; otherwise, the argu-
ment is returned unchanged.*/

#include "libft.h"

int	ft_tolower(int c)
{
	int	lower;

	lower = c;
	if ((c >= 65) && (c <= 90))
		lower = lower + 32;
	return (lower);
}
