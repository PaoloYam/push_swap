/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyammoun <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 14:33:18 by pyammoun          #+#    #+#             */
/*   Updated: 2021/11/09 14:04:12 by pyammoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>

int	ft_isdigit(int c);

int	main(int argc, char **argv)
{
	(void) argc;
	if (ft_isdigit(argv[1][0]) == 0)
		printf("is not digit");
	else
		printf("is digit");
}*/

int	ft_isdigit(int c)
{
	if (c < '0' || c > '9')
		return (0);
	else
		return (1);
}
