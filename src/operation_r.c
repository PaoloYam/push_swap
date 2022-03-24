/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_r.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyammoun <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 14:21:55 by pyammoun          #+#    #+#             */
/*   Updated: 2022/03/24 15:22:52 by pyammoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_vars *yuta)
{
	int	tmp;
	int i;
	int	first;

	tmp = 0;
	i = 0;
	if (!yuta->stacka)
		return ;
	first = yuta->stacka[0];
	while (i < yuta->counta - 1) 
	{
		tmp = yuta->stacka[i];
		yuta->stacka[i] = yuta->stacka[i + 1];
		i++;
	}
	yuta->stacka[yuta->counta - 1] = first;
}

void	rb(t_vars *yuta)
{
	int	tmp;
	int i;
	int	first;

	tmp = 0;
	i = 0;
	if (!yuta->stackb)
		return ;
	first = yuta->stackb[0];
	while (i < yuta->countb - 1) 
	{
		tmp = yuta->stackb[i];
		yuta->stackb[i] = yuta->stackb[i + 1];
		i++;
	}
	yuta->stackb[yuta->countb - 1] = first;
}

void	rr(t_vars *yuta)
{
	ra(yuta);
	rb(yuta);
}

