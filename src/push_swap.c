/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyammoun <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 10:42:42 by pyammoun          #+#    #+#             */
/*   Updated: 2022/03/30 16:07:54 by pyammoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	checku(int argc, t_vars *yuta)
{
	int	a;
	int b;

	a = 0;
	b = 1;
	while (b < argc - 1)
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

int	doublon(int argc, t_vars *yuta)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (a < argc - 2)
	{
		b = 0;
		while (b < argc - 1)
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

int	table(int argc, char **argv, t_vars *yuta)
{
	int		i;
	int		j;

	i = 0;
	j = 1;
	yuta->stacka = malloc(sizeof(int) * (argc - 1));
	if (yuta->stacka == NULL)
		return (0);
	yuta->stackb = malloc(sizeof(int) * (argc - 1));
	if (yuta->stackb == NULL)
		return (0);
	while (j < argc)
		yuta->stacka[i++] = ft_atoi(argv[j++]);
	yuta->counta = i;
	yuta->argc = argc;
	return (1);
}

int	main(int argc, char **argv)
{
	int		i;
	t_vars	yuta;
	
	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != 0)
		{
			if (ft_isdigit(argv[1][i]) || argv[1][i] == ' ')
					i++;
			else
			{
				ft_putstr_fd("Error\n", 1);
				return (0);
			}
		}
	}
	table(argc, argv, &yuta);
	if (checku(argc, &yuta))
	{
		printf("Deja trie");
		return (0);
	}
	if (!(doublon(argc, &yuta)))
	{
		ft_putstr_fd("Error\n", 1);
		return (0);
	}
	yuta.print = 1;
	yuta.countb = 0;
	if (argc == 4)
		solve3(&yuta);
	if (argc == 6)
		solve5(&yuta);
	return (0);
}
