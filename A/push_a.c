/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 16:13:10 by mayoub            #+#    #+#             */
/*   Updated: 2022/06/24 18:24:33 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pa(t_lst **start_a, t_lst **start_b)
{
	t_lst	*top_b;

	if (!*start_b)
		return ;
	top_b = (*start_b);
	(*start_b) = (*start_b)->next;
	top_b->next = *start_a;
	*start_a = top_b;
	ft_putstr_fd("pa\n", 1);
}
