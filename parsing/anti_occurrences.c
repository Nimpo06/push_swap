/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   anti_occurrences.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 16:50:25 by mayoub            #+#    #+#             */
/*   Updated: 2022/05/25 18:38:35 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	anti_occurrences(t_lst *lst)
{
	t_lst	*subject;

	if (!lst)
		return (1);
	while (lst != NULL)
	{
		subject = lst->next;
		while (subject != NULL)
		{
			if (subject->nbr == lst->nbr)
				return (1);
			subject = subject->next;
		}
		lst = lst->next;
	}
	return (0);
}
