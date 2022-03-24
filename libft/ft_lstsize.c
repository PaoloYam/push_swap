/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyammoun <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 16:22:55 by pyammoun          #+#    #+#             */
/*   Updated: 2021/11/09 15:02:20 by pyammoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*index;
	int		i;

	i = 0;
	index = lst;
	while (index)
	{
		index = index->next;
		i++;
	}
	return (i);
}
