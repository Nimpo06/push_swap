/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_a_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 16:17:19 by mayoub            #+#    #+#             */
/*   Updated: 2022/06/22 15:41:12 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ss2(t_lst **start_b)
{
	t_lst	*temp;
	int		swap;

	temp = (*start_b)->next;
	swap = (*start_b)->nbr;
	(*start_b)->nbr = temp->nbr;
	temp->nbr = swap;
}

void	ss(t_lst **start_a, t_lst **start_b)
{
	t_lst	*temp;
	int		swap;

	temp = (*start_a)->next;
	swap = (*start_a)->nbr;
	(*start_a)->nbr = temp->nbr;
	temp->nbr = swap;
	ss2(start_b);
	ft_putstr_fd("ss\n", 1);
}
