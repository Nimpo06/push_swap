/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 14:42:21 by mayoub            #+#    #+#             */
/*   Updated: 2022/05/23 17:17:10 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_lstiter(t_lst *lst, void (*f)(t_lst *content))
{
	t_lst	*current;

	current = lst;
	if (lst != 0)
	{
		while (current != NULL)
		{
			(*f)(current);
			current = current->next;
		}
	}
}
