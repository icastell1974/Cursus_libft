/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icastell <icastell@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 15:52:18 by icastell          #+#    #+#             */
/*   Updated: 2021/04/21 16:00:56 by icastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The ft_putchar_fd() function writes the character 'c' over
the provided file descriptor.*/

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
	return ;
}
