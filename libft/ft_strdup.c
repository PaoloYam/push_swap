/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyammoun <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 17:38:06 by pyammoun          #+#    #+#             */
/*   Updated: 2021/11/09 14:17:35 by pyammoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*#include <stdio.h>

char	*ft_strdup(const char *s1);

int	main(void)
{
	char	src[] = "abcdef";

	printf("%s", ft_strdup(src));
}*/

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*dest;
	int		j;

	i = 0;
	j = 0;
	while (s1[i])
		i++;
	dest = malloc(sizeof(char) * (i + 1));
	if (dest == 0)
		return (0);
	i = 0;
	while (s1[i])
	{
		dest[j] = s1[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
