/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 16:13:10 by mayoub            #+#    #+#             */
/*   Updated: 2022/05/18 18:54:24 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_lst **start_a, t_lst **start_b)
{
	t_lst	*top_b;

	top_b = *start_b;
	*start_b = *start_a;
	*start_a = (*start_a)->next;
	(*start_b)->next = top_b;
}

	// t_list *new_lst;
	
	// new_lst = malloc(sizeof(t_list));
	// new_lst->content = ;*start_b->content;
	// new_lst->next = *start_a
	// *start_a = new_lst;
	// del la premiere list de A
	// faire point vers le second, AKA celui que tu viens de push



	10	5
	8	6
	4	2
