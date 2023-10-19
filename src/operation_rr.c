/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_rr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyammoun <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 15:22:31 by pyammoun          #+#    #+#             */
/*   Updated: 2022/04/12 18:35:07 by pyammoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_vars *yuta)
{
	int	i;
	int	last;

	i = yuta->counta - 1;
	if (!yuta->stacka)
		return ;
	last = yuta->stacka[yuta->counta - 1];
	while (i > 0)
	{
		yuta->stacka[i] = yuta->stacka[i - 1];
		i--;
	}
	yuta->stacka[0] = last;
	if (yuta->print == 1)
		write (1, "rra\n", 4);
}

void	rrb(t_vars *yuta)
{
	int	i;
	int	last;

	i = yuta->countb - 1;
	if (!yuta->stackb)
		return ;
	last = yuta->stackb[yuta->countb - 1];
	while (i > 0)
	{
		yuta->stackb[i] = yuta->stackb[i - 1];
		i--;
	}
	yuta->stackb[0] = last;
	if (yuta->print == 1)
		write (1, "rrb\n", 4);
}

void	rrr(t_vars *yuta)
{
	yuta->print = 0;
	rra(yuta);
	rrb(yuta);
	write (1, "rrr\n", 4);
	yuta->print = 1;
}
