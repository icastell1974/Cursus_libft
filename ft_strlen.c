/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icastell <icastell@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 19:31:44 by icastell          #+#    #+#             */
/*   Updated: 2021/04/28 17:35:35 by icastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The ft_strlen() function returns the number of characters that precede the
terminating NULL character of the string str.*/

#include "libft.h"

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
