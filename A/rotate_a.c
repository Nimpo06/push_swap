/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_a.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 16:13:39 by mayoub            #+#    #+#             */
/*   Updated: 2022/06/23 17:45:10 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(t_lst **start_a)
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
		ft_putstr_fd("ra\n", 1);
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
		ft_putstr_fd("ra\n", 1);
	}
}
