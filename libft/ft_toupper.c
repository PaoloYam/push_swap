/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyammoun <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 15:23:40 by pyammoun          #+#    #+#             */
/*   Updated: 2021/11/09 14:07:11 by pyammoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>

int	ft_toupper(int c);

int	main(int argc, char **argv)
{
	(void) argc;
	printf("%d", ft_toupper(argv[1][0]));
	return	(0);	
}*/

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}
