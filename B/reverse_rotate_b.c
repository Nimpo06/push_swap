/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_b.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 16:14:53 by mayoub            #+#    #+#             */
/*   Updated: 2022/06/22 15:41:22 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rrb(t_lst **start_b)
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
	ft_putstr_fd("rrb\n", 1);
}
