/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyammoun <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 15:39:53 by pyammoun          #+#    #+#             */
/*   Updated: 2021/11/23 11:48:06 by pyammoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len);

/*int	main(void)
{
	const char		tab[] = "jaime les penis";
	unsigned int 	s;
	size_t			len;

	s = 7;
	len = 203;
	
	printf("%s", ft_substr(tab, s, len));
	return (0);
}*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	d;
	char	*sn;

	i = 0;
	d = 0;
	if ((unsigned int)ft_strlen(s) < start)
		return (ft_strdup(""));
	else if (ft_strlen(s) < len)
		sn = malloc(sizeof(char) * ((ft_strlen(s)) + 1));
	else
		sn = malloc(sizeof(char) * (len + 1));
	if (sn == NULL)
		return (NULL);
	while (s[i])
	{
		if (i >= start && d < len)
		{
			sn[d] = s[i];
			d++;
		}
		i++;
	}
	sn[d] = '\0';
	return (sn);
}
