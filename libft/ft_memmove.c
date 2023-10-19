/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyammoun <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 16:50:32 by pyammoun          #+#    #+#             */
/*   Updated: 2021/11/09 14:02:06 by pyammoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <unistd.h>

void	*ft_memmove(void *dst, const void *src, size_t len);

int	main(void)
{
	const char	src[] = "Bonjour";
	char	dst[100];
	size_t	n;
	int	i;
	
	i = 0;
	n = 7;
	ft_memmove(dst, src, n);
	while (dst[i])
	{
		write(1, &dst[i], 1);
		i++;
	}
}*/

void	ft_else(char *s, char *d, size_t len, size_t i)
{
	while (i < len)
	{
		d[i] = s[i];
		i++;
	}
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*s;
	char	*d;
	size_t	i;

	s = (char *)src;
	d = (char *)dst;
	i = 0;
	if (d == NULL && src == NULL)
		return (NULL);
	else if (d > s)
	{
		while (len > 0)
		{
			len--;
			d[len] = s[len];
		}
	}	
	else
		ft_else(s, d, len, i);
	return (dst);
}
