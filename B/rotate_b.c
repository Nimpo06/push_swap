/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 16:13:39 by mayoub            #+#    #+#             */
/*   Updated: 2022/05/17 16:20:34 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rb(t_lst **start_b)
{
	t_lst	*last;

	last = *start_b;
	while (last->next != NULL)
		last = last->next;
	last->next = *start_b;
	last->next->next = NULL;
	//(*start_b)->next = NULL;
}
