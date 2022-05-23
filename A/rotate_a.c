/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_a.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 16:13:39 by mayoub            #+#    #+#             */
/*   Updated: 2022/05/23 17:16:58 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(t_lst **start_a)
{
	t_lst	*last;

	last = *start_a;
	while (last->next != NULL)
		last = last->next;
	last->next = *start_a;
	last->next->next = NULL;
	//(*start_a)->next = NULL;
}
