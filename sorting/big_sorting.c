/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sorting.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 15:59:23 by mayoub            #+#    #+#             */
/*   Updated: 2022/06/22 17:35:33 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	check_one(t_lst *a, int i)
{
	while (a)
	{
		if (((a->nbr & (1 << i)) >> i) == 0)
			return (1);
		a = a->next;
	}
	return (0);
}

void	big_sorting(t_lst **start_a, t_lst **start_b, t_lst *all)
{
	int	j;

	(void) all;
	j = 0;
	while (j < 3)
	{
		while (check_one(*start_a, j))
		{
			if ((((*start_a)->nbr & (1 << j)) >> j) == 1)
				ra(start_a);
			else
				pb(start_a, start_b);
		}
		while ((*start_b)->next != NULL)
			pa(start_a, start_b);
		pa(start_a, start_b);
		j++;
	}
}
