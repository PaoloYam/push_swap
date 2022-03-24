/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyammoun <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 17:38:37 by pyammoun          #+#    #+#             */
/*   Updated: 2021/11/09 14:03:17 by pyammoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n);

int	main(int argc, char **argv)
{
	const char	tab[] = "hello les coupains";
	size_t		n;

	(void) argc;
	n = 6;
	memchr(tab, argv[1][0], n);
}*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	character;

	str = (unsigned char *)s;
	character = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (*str == character)
		{
			return (str);
		}
		str++;
		i++;
	}
	return (NULL);
}
