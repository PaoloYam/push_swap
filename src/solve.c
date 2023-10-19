/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyammoun <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 16:47:30 by pyammoun          #+#    #+#             */
/*   Updated: 2022/04/12 18:06:22 by pyammoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	radix(t_vars *yuta)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	len = yuta->counta - 1;
	while (checku(yuta) == 0)
	{
		j = 0;
		while (j <= len)
		{
			if (((yuta->stacka[0] >> i) & 1) == 1)
				ra(yuta);
			else
				pb(yuta);
			j++;
		}
		while (yuta->countb != 0)
			pa(yuta);
		i++;
	}
}

void	sorting(t_vars *yuta, int *number)
{
	int	tmp;
	int	i;
	int	j;

	i = 0;
	while (i < yuta->counta)
	{
		j = i + 1;
		while (j < yuta->counta)
		{
			if (number[i] > number[j])
			{
				tmp = number[i];
				number[i] = number[j];
				number[j] = tmp;
			}
			j++;
		}
		i++;
	}	
}

void	replace(t_vars *yuta, int *number)
{
	int	i;
	int	j;

	i = 0;
	while (i < yuta->counta)
	{
		j = 0;
		while (j < yuta->counta)
		{
			if (yuta->stacka[i] == number[j])
			{
				yuta->stacka[i] = j;
				j = yuta->counta - 1;
			}
			j++;
		}
		i++;
	}
}

void	solve(t_vars *yuta)
{
	int	i;
	int	*number;
	int	j;

	i = 0;
	j = 0;
	number = malloc(sizeof(int) * (yuta->counta));
	while (i < yuta->counta)
	{
		number[i] = yuta->stacka[j];
		i++;
		j++;
	}
	sorting(yuta, number);
	replace(yuta, number);
	free(number);
	radix(yuta);
}
