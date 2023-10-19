/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyammoun <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:05:24 by pyammoun          #+#    #+#             */
/*   Updated: 2021/12/03 15:38:43 by pyammoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

char	*ft_strmapi(char const *s, char (*f) (unsigned int, char));

/*int	main (void)
{
	char const	s[] = "salut les copains";
	ft_strmapi(s, ft_tolower);

	return (0);
}*/

char	*ft_strmapi(char const *s, char (*f) (unsigned int, char))
{	
	unsigned int		i;	
	char				*ns;

	i = 0;
	if (!s || !f)
		return (NULL);
	while (s[i])
		i++;
	ns = malloc(sizeof(char) * (i + 1));
	if (ns == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		ns[i] = f(i, s[i]);
		i++;
	}
	ns[i] = '\0';
	return (ns);
}
