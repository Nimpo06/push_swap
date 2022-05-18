/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 16:13:10 by mayoub            #+#    #+#             */
/*   Updated: 2022/05/18 18:33:49 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb(t_lst **start_b, t_lst **start_a)
{
	t_lst	*top_a;

	top_a = *start_a;
	*start_a = *start_b;
	*start_b = (*start_b)->next;
	(*start_a)->next = top_a;
}
