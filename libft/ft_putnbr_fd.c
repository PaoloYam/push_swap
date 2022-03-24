/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyammoun <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 16:16:13 by pyammoun          #+#    #+#             */
/*   Updated: 2021/12/03 15:48:04 by pyammoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	char	c;

	if (nb == -2147483648)
		write(fd, "-2147483648", 11);
	else
	{
		if (nb < 0)
		{
			write(fd, "-", 1);
			nb = -nb;
		}
		if (nb > 9)
			ft_putnbr_fd(nb / 10, fd);
		c = nb % 10 + '0';
		write(fd, &c, 1);
	}
}
