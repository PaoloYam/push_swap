/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyammoun <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 14:29:06 by pyammoun          #+#    #+#             */
/*   Updated: 2022/04/12 20:39:05 by pyammoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check(t_vars *yuta)
{
	if (yuta->maxa == yuta->stacka[0] && yuta->mina == yuta->stacka[2])
	{
		sa(yuta);
		rra(yuta);
	}	
	if (yuta->maxa == yuta->stacka[1] && yuta->mina == yuta->stacka[0])
	{
		rra(yuta);
		sa(yuta);
	}
	if (yuta->maxa == yuta->stacka[1] && yuta->mina == yuta->stacka[2])
		rra(yuta);
	if (yuta->maxa == yuta->stacka[2] && yuta->mina == yuta->stacka[1])
		sa(yuta);
	if (yuta->maxa == yuta->stacka[0] && yuta->mina == yuta->stacka[1])
		ra(yuta);
}

void	solve3(t_vars *yuta)
{
	int	i;

	i = 0;
	if (yuta->argc == 3)
	{
		if (yuta->stacka[0] > yuta->stacka[1])
			sa(yuta);
		return ;
	}
	yuta->maxa = yuta->stacka[0];
	yuta->mina = yuta->stacka[0];
	while (i < yuta->counta)
	{
		if (yuta->stacka[i] > yuta->maxa)
			yuta->maxa = yuta->stacka[i];
		if (yuta->stacka[i] < yuta->mina)
			yuta->mina = yuta->stacka[i];
		i++;
	}
	check(yuta);
}
