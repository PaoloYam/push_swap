/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_rr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyammoun <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 15:22:31 by pyammoun          #+#    #+#             */
/*   Updated: 2022/03/24 15:39:11 by pyammoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_vars *yuta)
{
	int	tmp;
	int	i;

	tmp = 0;
	i = 0;
	while (
		tmp = yuta->stacka[i + 1];
		yuta->stacka[i + 1] = yuta->stacka[i];

}
