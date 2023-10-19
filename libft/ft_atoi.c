/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyammoun <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 12:29:57 by pyammoun          #+#    #+#             */
/*   Updated: 2022/04/11 20:28:01 by pyammoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str);

int	main(void)
{
	const char	str[] = "   -2147483555555555555555555555555555555";
	printf("%d\n", ft_atoi(str));
	printf("%d", atoi(str));
}*/
int	ft_atoi(const char *str, int *c)
{
	int			i;
	long double	m;
	long double	r;

	i = 0;
	m = 1;
	r = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\f'
		|| str[i] == '\r' || str[i] == '\n' || str[i] == '\v')
		i++;
	if (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			m = -1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		r = r * 10 + (str[i] - 48);
		i++;
	}
	if ((m * r) > 2147483647)
		*c = 0;
	if ((m * r) < -2147483648)
		*c = 0;
	return ((int)(m * r));
}
