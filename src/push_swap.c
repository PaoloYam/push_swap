/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyammoun <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 10:42:42 by pyammoun          #+#    #+#             */
/*   Updated: 2022/04/12 21:39:14 by pyammoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	freetime(t_vars *yuta)
{
	if (yuta->stacka != NULL)
		free (yuta->stacka);
	if (yuta->stackb != NULL)
		free (yuta->stackb);
}

int	table(int argc, char **argv, t_vars *yuta)
{
	int		i;
	int		j;
	int		c;

	i = 0;
	j = 1;
	c = 1;
	yuta->stacka = malloc(sizeof(int) * (argc - 1));
	if (yuta->stacka == NULL)
		return (0);
	yuta->stackb = malloc(sizeof(int) * (argc - 1));
	if (yuta->stackb == NULL)
		return (0);
	while (j < argc)
	{
		yuta->stacka[i++] = ft_atoi(argv[j++], &c);
		yuta->bul = c;
		if (c == 0)
			return (0);
	}
	yuta->counta = i;
	yuta->argc = argc;
	return (1);
}

int	control(t_vars *yuta)
{
	if (checku(yuta))
	{
		freetime(yuta);
		return (0);
	}
	if (!(doublon(yuta)))
	{
		freetime(yuta);
		ft_putstr_fd("Error\n", 1);
		return (0);
	}
	yuta->print = 1;
	yuta->countb = 0;
	return (1);
}

int	main(int argc, char **argv)
{
	t_vars	yuta;

	if (controla(argc, argv) == 0)
		return (0);
	if ((argc == 2 && getarg(&yuta, argv) == 0)
		|| (argc != 2 && table(argc, argv, &yuta) == 0))
	{
		if (yuta.bul == 0)
			ft_putstr_fd("Error\n", 1);
		if (yuta.bul == 2)
			return (0);
		freetime(&yuta);
		return (0);
	}
	if (control(&yuta) == 0)
		return (0);
	if (yuta.argc == 4 || yuta.argc == 3)
		solve3(&yuta);
	if (yuta.argc == 6 || yuta.argc == 5)
		solve5(&yuta);
	if (yuta.argc > 6)
		solve(&yuta);
	freetime(&yuta);
	return (0);
}
