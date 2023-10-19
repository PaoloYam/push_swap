/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_sp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyammoun <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 14:22:52 by pyammoun          #+#    #+#             */
/*   Updated: 2022/04/06 15:25:26 by pyammoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_vars *yuta)
{
	int	tmp;

	tmp = 0;
	if (!yuta->stacka[1])
		return ;
	tmp = yuta->stacka[0];
	yuta->stacka[0] = yuta->stacka[1];
	yuta->stacka[1] = tmp;
	if (yuta->print == 1)
		write(1, "sa\n", 3);
}

void	sb(t_vars *yuta)
{
	int	tmp;

	tmp = 0;
	if (!yuta->stackb[1])
		return ;
	tmp = yuta->stackb[0];
	yuta->stackb[0] = yuta->stackb[1];
	yuta->stackb[1] = tmp;
	if (yuta->print == 1)
		write(1, "sb\n", 3);
}

void	ss(t_vars *yuta)
{
	yuta->print = 0;
	sa(yuta);
	sb(yuta);
	write(1, "ss\n", 3);
	yuta->print = 1;
}

void	pa(t_vars *yuta)
{
	int	i;

	if (yuta->counta == 0)
		i = 0;
	else
		i = yuta->counta - 1;
	if (!yuta->stackb)
		return ;
	while (i >= 0 && yuta->counta != 0)
	{
		yuta->stacka[i + 1] = yuta->stacka[i];
		i--;
	}
	yuta->stacka[0] = yuta->stackb[0];
	i = 0;
	while (i < yuta->countb - 1)
	{
		yuta->stackb[i] = yuta->stackb[i + 1];
		i++;
	}
	if (yuta->countb != 0)
		yuta->countb -= 1;
	yuta->counta += 1;
	write(1, "pa\n", 3);
}

void	pb(t_vars *yuta)
{
	int	i;

	if (yuta->countb == 0)
		i = 0;
	else
		i = yuta->countb - 1;
	if (!yuta->stacka)
		return ;
	while (i >= 0 && yuta->countb != 0)
	{
		yuta->stackb[i + 1] = yuta->stackb[i];
		i--;
	}
	yuta->stackb[0] = yuta->stacka[0];
	i = 0;
	while (i < yuta->counta - 1)
	{
		yuta->stacka[i] = yuta->stacka[i + 1];
		i++;
	}
	if (yuta->counta != 0)
		yuta->counta -= 1;
	yuta->countb += 1;
	write(1, "pb\n", 3);
}
