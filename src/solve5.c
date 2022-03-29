/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve6.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyammoun <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 16:37:23 by pyammoun          #+#    #+#             */
/*   Updated: 2022/03/29 18:08:11 by pyammoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	topelement(t_vars *yuta)
{
	int	i;
	int	r;
	int	tmp;
	
	i = 0;
	r = 0;
	yuta->mina = yuta->stacka[0];
	while (i < yuta->counta)
	{
		if (yuta->stacka[i] < yuta->mina)
		{
			r = i;
			tmp = yuta->stacka[i];
		}
		i++;
	}		
	if (r <= 1)
	{
		while (yuta->stacka[0] == tmp)
			ra(yuta);
	}
	if (r >= 2)
	{
		while (yuta->stacka[0] == tmp)
			rra(yuta);
	}
	pb(yuta);
}



void	solve5(t_vars *yuta)
{
	topelement(yuta);
	printf("%d\n", yuta->stackb[0]);
	printf("%d\n", yuta->stacka[0]);
}
