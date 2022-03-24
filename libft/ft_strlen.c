/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyammoun <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 11:02:37 by pyammoun          #+#    #+#             */
/*   Updated: 2022/03/10 10:52:14 by pyammoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>


int	ft_strlen(char **a);

int	main(int argc, char **argv)
{
	(void) argc;
	printf("%d", ft_strlen(argv));
	return (0);
}*/

size_t	ft_strlen(const char *a)
{
	size_t	i;

	i = 0;
	if (a[0] == '\0')
		return (i);
	while (a[i])
		i++;
	return (i);
}
