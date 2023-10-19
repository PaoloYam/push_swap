/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clean.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyammoun <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 15:05:02 by pyammoun          #+#    #+#             */
/*   Updated: 2022/04/12 19:48:48 by pyammoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	checku(t_vars *yuta)
{
	int	a;
	int	b;

	a = 0;
	b = 1;
	while (b < yuta->counta)
	{
		if (yuta->stacka[a] < yuta->stacka[b])
		{
			a++;
			b++;
		}
		else
			return (0);
	}
	return (1);
}

int	doublon(t_vars *yuta)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (a < yuta->counta - 1)
	{
		b = 0;
		while (b < yuta->counta)
		{
			if (b == a)
				b++;
			if (yuta->stacka[a] != yuta->stacka[b])
				b++;
			else
				return (0);
		}
		a++;
	}
	return (1);
}

int	tablesplit(t_vars *yuta)
{
	int	i;
	int	c;

	i = 0;
	c = 1;
	yuta->stacka = malloc(sizeof(int) * yuta->counta);
	if (yuta->stacka == NULL)
		return (0);
	yuta->stackb = malloc(sizeof(int) * yuta->counta);
	if (yuta->stackb == NULL)
		return (0);
	while (i < yuta->counta)
	{
		yuta->stacka[i] = ft_atoi(yuta->args[i], &c);
		yuta->bul = c;
		if (c == 0)
			return (0);
		i++;
	}
	while (i >= 0)
		free (yuta->args[i--]);
	free (yuta->args);
	return (1);
}

int	getarg(t_vars *yuta, char **argv)
{
	int	i;

	i = 0;
	while (argv[1][i])
	{
		if (argv[1][i] == ' ' || ft_isdigit(argv[1][i]) == 1)
			i++;
		else if (argv[1][i] == '-' && ft_isdigit(argv[1][i + 1]) == 1)
			i++;
		else
		{
			ft_putstr_fd("Error\n", 1);
			yuta->bul = 2;
			return (0);
		}
	}
	yuta->args = ft_split(argv[1], ' ');
	i = 0;
	while (yuta->args[i])
		i++;
	yuta->counta = i;
	yuta->argc = i + 1;
	if (tablesplit(yuta) == 0)
		return (0);
	return (1);
}
