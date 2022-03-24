/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyammoun <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 17:05:01 by pyammoun          #+#    #+#             */
/*   Updated: 2021/12/03 15:59:47 by pyammoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>

void	*ft_calloc(size_t count, size_t size);

int	main(void)
{	
	size_t	count;
	size_t	size;

	count = 6;
	size = 4;
	
	ft_calloc(count, size);
	return (0);	
}*/

void	*ft_calloc(size_t nbrelem, size_t sizeelem)
{
	char	*ptr;
	size_t	i;

	i = 0;
	ptr = malloc(nbrelem * sizeelem);
	if (ptr == NULL)
		return (ptr);
	while (i < (nbrelem * sizeelem) && (nbrelem * sizeelem) != 0)
	{
		((unsigned char *)ptr)[i] = '\0';
		i++;
	}
	return (ptr);
}
