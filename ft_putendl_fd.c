/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icastell <icastell@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 16:07:45 by icastell          #+#    #+#             */
/*   Updated: 2021/04/21 16:12:25 by icastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The ft_putendl_fd() function writes the string 's' over
the provided file descriptor, followed by a newline.*/

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (s != NULL)
	{
		write(fd, s, ft_strlen(s));
		ft_putchar_fd('\n', fd);
	}
	return ;
}
