/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyammoun <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 14:49:29 by pyammoun          #+#    #+#             */
/*   Updated: 2021/11/09 14:06:32 by pyammoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>


int	ft_isalnum(int c);

int	main(int argc, char **argv)
{
	(void) argc;
	if (ft_isalnum(argv[1][0]) == 0)
		printf("is not alnum");
	else
		printf("is alnum");
}*/

int	ft_isalnum(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
