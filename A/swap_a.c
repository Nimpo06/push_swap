/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 16:12:42 by mayoub            #+#    #+#             */
/*   Updated: 2022/06/02 19:24:06 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_lst **start_a)
{
	t_lst	*temp;
	int		swap;

	temp = (*start_a)->next;
	swap = (*start_a)->nbr;
	(*start_a)->nbr = temp->nbr;
	temp->nbr = swap;
	//temp->next = temp;
	//temp->next = (*start_a)->next->next;
	printf("sa\n");
}
