/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyammoun <pyammoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 12:31:47 by pyammoun          #+#    #+#             */
/*   Updated: 2021/11/02 18:10:59 by pyammoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set);

/*int	main(void)
{
	const char	s1[] = "eeabcdffdcaHello les Amis commentddeeeffaa";
	const char	set[] = "abcdef";

	printf("%s", ft_strtrim(s1, set));
	return (0);
}*/

char	*charstart(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	r;

	j = 0;
	i = 0;
	while (s1[i])
	{
		r = 0;
		while (set[j])
		{
			if (set[j] == s1[i])
				r = 1;
			j++;
		}
		j = 0;
		if (r == 0)
			return ((char *)&s1[i]);
		else
			i++;
	}
	return ((char *)s1);
}

int	charend(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	r;

	i = 0;
	j = 0;
	while (s1[i])
		i++;
	i = i - 1;
	while (i >= 0)
	{
		r = 0;
		while (set[j])
		{
			if (set[j] == s1[i])
				r = 1;
			j++;
		}
		j = 0;
		if (r == 0)
			return (i + 1);
		else
			i--;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		end;
	char	*new;

	i = 0;
	s1 = charstart(s1, set);
	end = charend(s1, set);
	new = malloc(sizeof(char) * (end + 1));
	if (new == NULL)
		return (NULL);
	while (i < end)
	{
		new[i] = s1[i];
		i++;
	}
	new[i] = '\0';
	return ((char *)new);
}
