/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 16:12:42 by mayoub            #+#    #+#             */
/*   Updated: 2022/05/23 17:16:58 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_lst **start_a)
{
	t_lst	*temp;

	temp = (*start_a);
	*start_a = (*start_a)->next;
	(*start_a)->next = temp;
	temp->next = (*start_a)->next->next;
}
