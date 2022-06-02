/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 16:12:42 by mayoub            #+#    #+#             */
/*   Updated: 2022/06/02 19:24:29 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sb(t_lst **start_b)
{
	t_lst	*temp;
	int		swap;

	temp = (*start_b)->next;
	swap = (*start_b)->nbr;
	(*start_b)->nbr = temp->nbr;
	temp->nbr = swap;
	//temp->next = temp;
	//temp->next = (*start_b)->next->next;
	printf("sb");
}
