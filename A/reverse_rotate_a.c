/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_a.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 16:14:53 by mayoub            #+#    #+#             */
/*   Updated: 2022/05/20 16:56:36 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rra(t_lst **start_a)
{
	t_lst	*first;
	//t_lst	*second;
	first = *start_a;
	while (first->next != NULL)
	{
		if (first->next->next->next == NULL)
		{
			first->next->next = *start_a;
			first->next = NULL;
		}
	}
	first->next = *start_a;
}
