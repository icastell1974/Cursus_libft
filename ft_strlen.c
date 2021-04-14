/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icastell <icastell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 19:31:44 by icastell          #+#    #+#             */
/*   Updated: 2021/04/09 10:31:05 by icastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The ft_strlen() function returns the number of characters that precede the
terminating NUL character of the string str.*/

#include "libft.h"

size_t	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
