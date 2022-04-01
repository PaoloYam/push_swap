/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyammoun <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 16:47:30 by pyammoun          #+#    #+#             */
/*   Updated: 2022/04/01 19:07:55 by pyammoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"



void	solve(t_vars *yuta)
{
	int	i;
	int	*number;
	int	j;
	int	a;

	i = 0;
	j = 0;
	number = malloc(sizeof(int) * (yuta->counta));
	while (i < yuta->counta)
		number[i] = yuta->stacka[i], i++;
	i = 0;
	while (i < yuta->counta)
    {
		j = i + 1;
    	while (j < yuta->counta)
        {
            if (number[i] > number[j]) 
            {
                a =  number[i];
                number[i] = number[j];
            	number[j] = a;
            }
			j++; 
        }
		i++; 
     }
	i = 0;
	j = 0;
	while (i < yuta->counta)
	{
		j = 0;
		while (j < yuta->counta)
		{
			if (yuta->stacka[j] == number[i])
				yuta->stacka[j] = i;
			j++;
		}
		i++;
	}
	free(number);
}

