/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 16:12:42 by mayoub            #+#    #+#             */
/*   Updated: 2022/05/18 18:40:42 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sb(t_lst **start_b)
{
	t_lst	*content;

	content = *start_b;
	(*start_b)->next = (*start_b)->next->next;
	(*start_b)->next->next = (*start_b)->next;
}
