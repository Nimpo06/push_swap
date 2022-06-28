/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   short_sorting.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 17:11:52 by mayoub            #+#    #+#             */
/*   Updated: 2022/06/28 18:05:09 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "../push_swap.h"

int	trigger_get_min(t_lst **start_a)
{
	int		trigger;
	int		min_trigger;
	t_lst	*son;

	son = (*start_a);
	min_trigger = son->nbr;
	while (son != NULL)
	{
		trigger = son->nbr;
		if (trigger < min_trigger)
			min_trigger = trigger;
		son = son->next;
	}
	return (min_trigger);
}

void	short_sorting_5(t_lst **start_a, t_lst **start_b)
{
	int		stop;
	int		min_trigger;
	int		trigger;

	stop = 0;
	trigger = (*start_a)->nbr;
	while (stop != 2)
	{
		min_trigger = trigger_get_min(start_a);
		trigger = (*start_a)->nbr;
		while (min_trigger != trigger)
		{
			if (min_trigger >= (ft_lstsize(*start_a)) / 2)
				rra(start_a);
			else
				ra(start_a);
			trigger = (*start_a)->nbr;
		}
		if (is_trier(start_a) == 1)
			pb(start_a, start_b);
		stop++;
	}
	short_sorting_3(start_a);
	while (*(start_b) != NULL)
		pa(start_a, start_b);
}

void	short_sorting_4(t_lst **start_a, t_lst **start_b)
{
	int		trigger;
	int		min_trigger;

	trigger = INT_MAX;
	min_trigger = trigger_get_min(start_a);
	while (min_trigger != trigger)
	{
		rra(start_a);
		trigger = (*start_a)->nbr;
	}
	pb(start_a, start_b);
	short_sorting_3(start_a);
	pa(start_a, start_b);
}

void	short_sorting_3(t_lst **start_a)
{
	while (is_trier(start_a) != 0)
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
	if (ft_lstsize(*start_a) == 2)
		sa(start_a);
	else if (ft_lstsize(*start_a) == 3)
	{
		if (((*start_a)->nbr < (*start_a)->next->nbr
				&& (*start_a)->next->nbr > (*start_a)->next->next->nbr)
			&& ((*start_a)->nbr > (*start_a)->next->next->nbr))
			rra(start_a);
		short_sorting_3(start_a);
	}
	else if (ft_lstsize(*start_a) == 4)
		short_sorting_4(start_a, start_b);
	else if (ft_lstsize(*start_a) == 5)
		short_sorting_5(start_a, start_b);
	else
		big_sorting(start_a, start_b);
	exit(0);
}
