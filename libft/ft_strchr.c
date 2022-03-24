/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyammoun <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 16:19:13 by pyammoun          #+#    #+#             */
/*   Updated: 2021/11/05 16:39:26 by pyammoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>

char	*strchr(const char *s, int c);

int	main(int argc, char **argv)
{
	(void) argc;
	const char	tab[]= "salut les copains";
	
	printf("%s", strchr(tab, argv[1][0]));

	return(0);
}*/

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char) c)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	return ((char *)0);
}
