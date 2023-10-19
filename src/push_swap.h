/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyammoun <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 10:47:45 by pyammoun          #+#    #+#             */
/*   Updated: 2022/04/12 20:04:25 by pyammoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <limits.h>
# include "../libft/libft.h"

typedef struct s_vars {
	int		*stacka;
	int		*stackb;
	char	**args;
	int		argc;
	int		counta;
	int		countb;
	int		mina;
	int		maxa;
	int		minb;
	int		maxb;
	int		print;
	int		bul;
}	t_vars;

void	sa(t_vars *yuta);
void	sb(t_vars *yuta);
void	ss(t_vars *yuta);
void	pa(t_vars *yuta);
void	pb(t_vars *yuta);
void	ra(t_vars *yuta);
void	rb(t_vars *yuta);
void	rr(t_vars *yuta);
void	rra(t_vars *yuta);
void	rrb(t_vars *yuta);
void	rrr(t_vars *yuta);
void	solve3(t_vars *yuta);
void	check(t_vars *yuta);
void	solve5(t_vars *yuta);
void	solve(t_vars *yuta);
void	topelement(t_vars *yuta);
int		checku(t_vars *yuta);
int		doublon(t_vars *yuta);
int		getarg(t_vars *yuta, char **argv);
void	print(t_vars *yuta);
int		tablesplit(t_vars *yuta);
int		controla(int argc, char **argv);
#endif
