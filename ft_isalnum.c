/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icastell <icastell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 16:30:45 by icastell          #+#    #+#             */
/*   Updated: 2021/04/09 09:51:52 by icastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The function checks if the character is alphanumeric. Returns zero if the
character tests false and returns non-zero if the character tests true.*/

#include "libft.h"

int	ft_isalnum(int c)
{
	int	alnum;

	if ((c < 48) || ((c >= 58) && (c < 65)) || ((c >= 91) && (c <= 96))
		|| (c > 122))
		alnum = 0;
	else
		alnum = 1;
	return (alnum);
}
