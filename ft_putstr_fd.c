/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icastell <icastell@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 16:01:57 by icastell          #+#    #+#             */
/*   Updated: 2021/04/21 16:05:23 by icastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The ft_putstr_fd() function writes the string 's' over
the provided file descriptor.*/

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (s != NULL)
		write(fd, s, ft_strlen(s));
	return ;
}
