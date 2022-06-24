/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 16:13:10 by mayoub            #+#    #+#             */
/*   Updated: 2022/06/24 18:24:48 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pb(t_lst **start_a, t_lst **start_b)
{
	t_lst	*top_a;

	if (!*start_a)
		return ;
	top_a = *start_a;
	*start_a = (*start_a)->next;
	top_a->next = *start_b;
	*start_b = top_a;
	ft_putstr_fd("pb\n", 1);
}
