/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 17:11:52 by mayoub            #+#    #+#             */
/*   Updated: 2022/06/11 21:03:14 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "../push_swap.h"

int	the_sort_guardian(t_lst **start_a)
{
	t_lst	*son_1;
	t_lst	*son_2;

	son_1 = (*start_a);
	son_2 = (*start_a);
	son_2 = son_2->next;
	while (son_2->next)
	{
		if (son_1->nbr > son_2->nbr)
			return (1);
		son_1 = son_1->next;
		son_2 = son_2->next;
	}
	return (0);
}

void	short_sorting(t_lst *start_a, t_lst *start_b)
{
	(void) *start_b;
	while (the_sort_guardian(&start_a) == 1)
	{
		if (start_a->nbr > start_a->next->nbr && start_a->next->nbr > start_a->next->next->nbr)
		{
			sa(&start_a);
			rra(&start_a); // ! REVERSE ROTATE A NE MARCHE PAS ! Il faut le fix.
		}
		// if (start_a->nbr > start_a->next->nbr)
		// {
		// 	if (start_a->next->nbr < start_a->next->next->nbr)
		// 		rra(&start_a);
		// 	else
		// 		ra(&start_a);
		// }
		// else
		// {
		// 	sa(&start_a);
		// 	printf("lol\n");
		// }
	}
	//printf("%d\n", start_a->nbr);
}

void	sorting(t_lst *start_a, t_lst *start_b)
{
	if (ft_lstsize(start_a) == 2)
		sa(&start_a);
	if (ft_lstsize(start_a) <= 5)
		short_sorting(start_a, start_b);
// 	else
// 		big_sorting(start_a, start_b);
}
