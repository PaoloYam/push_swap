/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyammoun <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 11:21:36 by pyammoun          #+#    #+#             */
/*   Updated: 2021/11/09 13:57:27 by pyammoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
/*#include <stdio.h>

void *ft_memset(void *b, int c, size_t len);

int	main(void)
{
	char *str;
	//char test[100];
	int	i;

	i = 0;
	ft_memset(str, 2, sizeof(int) * 3);
	while (str[i])
	{
		printf("%d", str[i]);
		i++;
	}
	memset(test, 2, (sizeof(int) * 3));
	i = 0;
	while (test[i])
	{
		printf("%d", test[i]);
		i++;
	}
	return (0);
}*/
void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)b)[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
