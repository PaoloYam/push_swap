/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve6.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyammoun <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 16:37:23 by pyammoun          #+#    #+#             */
/*   Updated: 2022/04/12 20:31:07 by pyammoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	topelement(t_vars *yuta)
{
	int	i;
	int	r;

	i = 0;
	yuta->mina = yuta->stacka[0];
	while (i < yuta->counta)
	{
		if (yuta->stacka[i] < yuta->mina)
		{
			r = i;
			yuta->mina = yuta->stacka[i];
		}
		i++;
	}		
	if (r <= 1)
	{
		while (yuta->stacka[0] != yuta->mina)
			ra(yuta);
	}
	if (r >= 2)
	{
		while (yuta->stacka[0] != yuta->mina)
			rra(yuta);
	}
	pb(yuta);
}

void	solve5(t_vars *yuta)
{
	topelement(yuta);
	if (yuta->argc == 6)
		topelement(yuta);
	solve3(yuta);
	pa(yuta);
	pa(yuta);
}
