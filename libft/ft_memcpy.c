/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyammoun <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 14:44:14 by pyammoun          #+#    #+#             */
/*   Updated: 2021/11/09 14:01:41 by pyammoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <unistd.h>

void	*ft_memcpy(void *dst, const void *src, size_t n);

int	main(void)
{
	const char	src[] = "bonjour";
	char	dest[100]; 
	size_t	n;
	//int	i;

	n = 6;
	ft_memcpy(dest, src, n);
	i = 0;
	while (dest[i])
	{
		write(1, &dest[i], 1);
		i++;
	}
	return (0);
}*/

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (dst);
	if (dst == NULL && src == NULL)
		return (NULL);
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}
