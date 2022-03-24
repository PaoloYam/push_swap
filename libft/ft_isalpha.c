/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyammoun <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 13:51:01 by pyammoun          #+#    #+#             */
/*   Updated: 2021/11/09 14:04:00 by pyammoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>

int	ft_isalpha(int a);

int	main(int argc, char **argv) 
{
	(void) argc;
	if(ft_isalpha(argv[1][0]) == 0) 
		printf("is not alpha");
	else
		printf("is alpha");
}*/

int	ft_isalpha(int a)
{
	if (a >= 'a' && a <= 'z')
		return (1);
	else if (a >= 'A' && a <= 'Z')
		return (1);
	else
		return (0);
}
