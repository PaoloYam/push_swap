/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyammoun <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 10:59:43 by pyammoun          #+#    #+#             */
/*   Updated: 2021/11/09 17:25:16 by pyammoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/*int	main(void)
{
	char const	s[] = "Tripoa";
	char		c;

	c = ' ';
	ft_split(s, c);
	return (0);
}*/

int	*ft_countword(char const *s, int *w, char c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[0] != c && i == 0)
			*w = *w + 1;
		else if (s[i + 1] != c && s[i] == c && s[i + 1])
			*w = *w + 1;
		i++;
	}
	return (w);
}

void	ft_write(char *tab, char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != c && s[i])
	{
		tab[i] = s[i];
		i++;
	}
	tab[i] = '\0';
}

char	**ft_free(char **tab, int w)
{
	while (w >= 0)
	{
		free(tab[w]);
		w--;
	}
	free(tab);
	return (NULL);
}

char	**ft_assign(char **tab, char const *s, char c, int stop)
{
	int	i;
	int	j;
	int	w;

	i = 0;
	w = 0;
	while (s[i] && w < stop)
	{
		if (s[i] == c)
			i++;
		else
		{
			j = 0;
			while (s[i + j] != c && s[i + j])
				j++;
			tab[w] = (char *)malloc(sizeof(char) * (j + 1));
			if (tab[w] == NULL)
				return (ft_free(tab, w));
			ft_write(tab[w], &s[i], c);
			i = i + j;
			w++;
		}
	}
	tab[w] = 0;
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	int		w;
	char	**tab;

	w = 0;
	if (!s)
		return (NULL);
	ft_countword(s, &w, c);
	tab = (char **)malloc((sizeof(char *) * (w + 1)));
	if (tab == NULL)
		return (NULL);
	ft_assign(tab, s, c, w);
	return (tab);
}
