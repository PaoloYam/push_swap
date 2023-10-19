/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puchar.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyammoun <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:06:18 by pyammoun          #+#    #+#             */
/*   Updated: 2021/11/04 13:51:11 by pyammoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

/*void	ft_putchar_fd(char c, int fd);

int	main(void)
{
	char	c;

	c = 'c';

}*/

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
