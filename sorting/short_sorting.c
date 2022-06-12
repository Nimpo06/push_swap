/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   short_sorting.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 17:11:52 by mayoub            #+#    #+#             */
/*   Updated: 2022/06/12 16:49:12 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "../push_swap.h"

void	reversed(t_lst **start_a)
{
	sa(start_a);
	rra(start_a);
}

int	the_sort_guardian(t_lst *start_a)
{
	t_lst	*son_1;
	t_lst	*son_2;

	son_1 = (start_a);
	son_2 = (start_a)->next;
	while (son_1)
	{
		if (son_1->nbr > son_2->nbr)
			return (1);
		son_1 = son_1->next;
		son_2 = son_2->next;
	}
	return (0);
}

void	short_sorting_5(t_lst **start_a, t_lst **start_b)
{
	int	trigger;

	trigger = 0;
	while ((*start_a)->next != NULL)
	{
		if ((*start_a)->nbr > (*start_a)->next->nbr)
			(*start_a)->next;
		while ((*start_a)->nbr < (*start_a)->next->nbr) // ? trouver un moyen de detecter les
		{												// ? 2 plus petits nbr pour les push_b
			if ((*start_a)->nbr > (*start_a)->next->nbr)// ? avec l'aide d'un trigger
				(*start_a) = (*start_a)->next;			// * je suis sûr qu'il y a un moyen !!!
		}
		if (trigger == 0)
			short_sorting_5(start_a, start_b);
		trigger++;
	}
}

void	short_sorting_3(t_lst **start_a)
{
	while (the_sort_guardian(*start_a) == 1)
	{
		if ((*start_a)->nbr > (*start_a)->next->nbr
			&& (*start_a)->next->nbr > (*start_a)->next->next->nbr)
		{
			reversed(start_a);
			break ;
		}
		if ((*start_a)->nbr > (*start_a)->next->nbr
			&& (*start_a)->next->nbr < (*start_a)->next->next->nbr)
		{
			if ((*start_a)->nbr < (*start_a)->next->next->nbr)
			{
				sa(start_a);
				break ;
			}
			else
			{
				ra(start_a);
				break ;
			}
		}
		else
			sa(start_a);
	}
}

void	sorting(t_lst **start_a, t_lst **start_b)
{
	(void) start_b;
	if (ft_lstsize(*start_a) == 2)
		sa(start_a);
	if (ft_lstsize(*start_a) == 3)
		short_sorting_3(start_a);
	// if (ft_lstsize(*start_a) == 5)
	// 	short_orting_5(start_a, start_b);
// 	else
// 		big_sorting(start_a, start_b);
}
