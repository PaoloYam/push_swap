/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyammoun <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 16:47:30 by pyammoun          #+#    #+#             */
/*   Updated: 2022/04/04 16:32:18 by pyammoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	radix(t_vars *yuta)
{
	int	i;
	int	j;

	i = 0;
	while (checku(yuta) == 0)
	{
		j = 0;
		while (j < yuta->counta)
		{
			if ((yuta->stacka[j] >> i) & 1)
				ra(yuta);
			else
				pb(yuta);
			j++;
		}
		while (yuta->countb != 0)
			pa(yuta);
		i++;
	}

}

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
	radix(yuta);
}



