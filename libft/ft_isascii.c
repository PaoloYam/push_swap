/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyammoun <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 17:33:35 by pyammoun          #+#    #+#             */
/*   Updated: 2021/11/09 14:06:43 by pyammoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>

int	ft_isascii(int c);

int	main(int argc, char ** argv)
{
	(void) argc;
	if (ft_isascii(argv[1][0]) == 0)
		printf("is not ascii");
	else
		printf("is ascii");
}*/

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
