/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_a_b.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 16:18:31 by mayoub            #+#    #+#             */
/*   Updated: 2022/06/22 15:40:52 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rr2(t_lst **start_b)
{
	t_lst	*last;
	t_lst	*swap;
	int		swap_2;

	if ((*start_b)->next->next == NULL)
	{
		last = (*start_b)->next;
		swap_2 = (*start_b)->nbr;
		(*start_b)->nbr = last->nbr;
		last->nbr = swap_2;
	}
	else
	{
		last = (*start_b);
		(*start_b) = (*start_b)->next;
		swap = (*start_b)->next;
		while (swap->next != NULL)
			swap = swap->next;
		swap->next = last;
		last->next = NULL;
	}
}

void	rr(t_lst **start_a, t_lst **start_b)
{
	t_lst	*last;
	t_lst	*swap;
	int		swap_2;

	if ((*start_a)->next->next == NULL)
	{
		last = (*start_a)->next;
		swap_2 = (*start_a)->nbr;
		(*start_a)->nbr = last->nbr;
		last->nbr = swap_2;
	}
	else
	{
		last = (*start_a);
		(*start_a) = (*start_a)->next;
		swap = (*start_a)->next;
		while (swap->next != NULL)
			swap = swap->next;
		swap->next = last;
		last->next = NULL;
	}
	rr2(start_b);
	ft_putstr_fd("rr\n", 1);
}
