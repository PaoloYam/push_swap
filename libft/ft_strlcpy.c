/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyammoun <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 11:56:00 by pyammoun          #+#    #+#             */
/*   Updated: 2021/11/05 11:58:33 by pyammoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <unistd.h>
#include <stdio.h>

int	ft_strlcpy(char *dst, const char *src, size_t dstsize);

int main(void)
{
	char	dst[100];
	char const	src[] = "bonjour";
	size_t	n;
	int	i;

	n = 5;
	printf("%d\n", ft_strlcpy(dst, src, n));
	i = 0;
	while (dst[i])
	{
		write(1, &dst[i], 1);
		i++;
	}
	return (0);
}*/

int	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	int		l;

	i = 0;
	l = 0;
	while (src[l])
		l++;
	if (size == 0)
		return (l);
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (l);
}
