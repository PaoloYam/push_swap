/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_r.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyammoun <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 14:21:55 by pyammoun          #+#    #+#             */
/*   Updated: 2022/04/12 21:38:42 by pyammoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_vars *yuta)
{
	int	tmp;
	int	i;
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
	if (yuta->print == 1)
		write(1, "ra\n", 3);
}

void	rb(t_vars *yuta)
{
	int	tmp;
	int	i;
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
	if (yuta->print == 1)
		write(1, "rb\n", 3);
}

void	rr(t_vars *yuta)
{
	yuta->print = 0;
	ra(yuta);
	rb(yuta);
	write(1, "rr\n", 3);
	yuta->print = 1;
}

int	controla(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			if (ft_isalpha(argv[i][j]))
			{
				ft_putstr_fd("Error\n", 1);
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}
