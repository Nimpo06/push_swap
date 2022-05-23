/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_b.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 16:14:53 by mayoub            #+#    #+#             */
/*   Updated: 2022/05/23 17:16:58 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rrb(t_lst **start_b)
{
	t_lst	*first;
	//t_lst	*second;
	first = *start_b;
	while (first->next != NULL)
	{
		if (first->next->next->next == NULL)
		{
			first->next->next = *start_b;
			first->next = NULL;
		}
	}
	first->next = *start_b;
}
