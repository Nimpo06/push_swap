/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_a_b.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 16:18:50 by mayoub            #+#    #+#             */
/*   Updated: 2022/06/22 15:40:48 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rrr2(t_lst **start_b)
{
	t_lst	*first;
	t_lst	*swap;

	swap = (*start_b);
	while (swap->next != NULL)
	{
		if (swap->next->next == NULL)
			first = swap;
		swap = swap->next;
	}
	first->next = NULL;
	swap->next = (*start_b);
	(*start_b) = swap;
}

void	rrr(t_lst **start_a, t_lst **start_b)
{
	t_lst	*first;
	t_lst	*swap;

	swap = (*start_a);
	while (swap->next != NULL)
	{
		if (swap->next->next == NULL)
			first = swap;
		swap = swap->next;
	}
	first->next = NULL;
	swap->next = (*start_a);
	(*start_a) = swap;
	rrr2(start_b);
	ft_putstr_fd("rrr\n", 1);
}
