/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyammoun <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 10:47:45 by pyammoun          #+#    #+#             */
/*   Updated: 2022/03/30 15:13:29 by pyammoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include "../libft/libft.h"

typedef struct s_vars {
	int	*stacka;
	int	*stackb;
	int	argc;
	int counta;
	int	countb;
	int	maxa;
	int	maxb;
	int	mina;
	int	minb;
	int	print;
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
void 	solve5(t_vars *yuta);
void	topelement(t_vars *yuta);
#endif
