/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icastell <icastell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 17:15:54 by icastell          #+#    #+#             */
/*   Updated: 2021/04/09 09:33:14 by icastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*If the argument is a lower-case letter, the ft_toupper() function returns the
corresponding upper-case letter if there is one; otherwise, the argument is
returned unchanged.*/

#include "libft.h"

int	ft_toupper(int c)
{
	int	upper;

	upper = c;
	if ((c >= 97) && (c <= 122))
		upper = upper - 32;
	return (upper);
}
