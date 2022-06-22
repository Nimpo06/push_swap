/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 16:13:39 by mayoub            #+#    #+#             */
/*   Updated: 2022/06/22 15:40:07 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rb(t_lst **start_b)
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
		ft_putstr_fd("rb\n", 1);
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
		ft_putstr_fd("rb\n", 1);
	}
}
