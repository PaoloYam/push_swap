/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyammoun <pyammoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 17:10:17 by pyammoun          #+#    #+#             */
/*   Updated: 2022/01/20 15:13:55 by pyammoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>

char	*strrchr(const char *s, int c);

int	main(int argc, char **argv)
{
	(void) argc;
	const char	tab[]= "salut les copains";
	
	printf("%s", strchr(tab, argv[1][0]));

	return(0);
}*/

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (*str)
	{
		str++;
		i++;
	}
	while (i >= 0)
	{
		if (*str == (char)c)
			return ((char *)str);
		str--;
		i--;
	}
	str = NULL;
	return ((char *)str);
}
