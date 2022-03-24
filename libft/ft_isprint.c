/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyammoun <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 10:46:43 by pyammoun          #+#    #+#             */
/*   Updated: 2021/11/09 14:06:55 by pyammoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>

int	ft_isprint(int c);

int	main(int argc, char **argv)
{
	(void) argc;
	if (ft_isprint(argv[1][0]) == 0)
		printf("is not printable");
	else
		printf("is printable");
}*/

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
