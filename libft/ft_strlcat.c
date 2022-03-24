/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyammoun <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 12:21:57 by pyammoun          #+#    #+#             */
/*   Updated: 2021/11/19 11:02:30 by pyammoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <unistd.h>
#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t n);

int	main(void)
{
	char		dst[100] = "j aime la_";
	const char	src[] = "pizza au jaumbooom";
	char		dst1[100] = "j aime la_";
	const char	src1[] = "pizza au jaumbooom";
	size_t		n;
	int			i;

	n = 9;
	i = 0;
	printf("%lu\n", ft_strlcat(dst, src, n));
	while (dst[i])
	{
		write(1, &dst[i], 1);
		i++;
	}
	printf("\n%lu\n", strlcat(dst1, src1, n));
	printf("%s", dst1);
	return (0);
}*/

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	i;
	size_t	l;

	i = 0;
	l = 0;
	while (dst[l])
		l++;
	while (src[i] && l < n - 1 && n != 0)
	{
		dst[l] = src[i];
		i++;
		l++;
	}
	while (src[i])
	{
		i++;
		l++;
	}
	dst[l] = '\0';
	if (n < (l - i))
		return (n + i);
	return (l);
}
