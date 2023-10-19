/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyammoun <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 18:06:58 by pyammoun          #+#    #+#             */
/*   Updated: 2022/01/20 15:26:27 by pyammoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2);

/*int	main(void)
{
	const char	s1[] = "1-2-3-4-5-6-7-8--8-8--8-4------4--4";
	const char	s2[] = "<U+0000>";

	printf("%s", ft_strjoin(s1, s2));
	return (0);
}*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	str = malloc((i + j + 1) * sizeof(*str));
	if (str == NULL)
		return (0);
	i = 0;
	j = 0;
	while (s1[j])
		str[i++] = s1[j++];
	j = 0;
	while (s2[j])
		str[i++] = s2[j++];
	str[i] = '\0';
	return (str);
}
