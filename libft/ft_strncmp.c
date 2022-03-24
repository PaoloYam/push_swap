/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyammoun <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 17:15:30 by pyammoun          #+#    #+#             */
/*   Updated: 2021/10/29 16:15:10 by pyammoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n);

int	main(void)
{
	const char	s1[] = "Asa";
	const char	s2[] = "Asb";
	size_t		n;

	n = 3;
	printf("%d", strncmp(s1,s2,n));
}*/

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s2[i] && (s1[i] == s2[i]) && (i < (n - 1)))
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
