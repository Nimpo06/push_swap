/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sorting.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 15:59:23 by mayoub            #+#    #+#             */
/*   Updated: 2022/06/28 17:06:14 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	binary_ra(t_lst	**start_a)
{
	if ((*start_a)->next)
		ra(start_a);
}

int	is_trier(t_lst **start_a)
{
	int		i;
	t_lst	*son;

	son = (*start_a);
	i = ft_lstsize(son);
	while (i > 0 && son->next != NULL)
	{
		if (son->nbr > son->next->nbr)
			return (1);
		son = son->next;
		i--;
	}
	return (0);
}

void	big_sorting(t_lst **start_a, t_lst **start_b)
{
	int		j;
	int		i;

	j = 0;
	i = ft_lstsize(*start_a);
	while (is_trier(start_a) != 0)
	{
		while (i > 0)
		{
			index_sort(start_a);
			i--;
		}
		i = ft_lstsize(*start_a);
		while (i-- > 0)
		{
			if ((((*start_a)->index >> j & 1) == 1))
				binary_ra(start_a);
			else
				pb(start_a, start_b);
		}
		while ((*start_b)->next != NULL)
			pa(start_a, start_b);
		pa(start_a, start_b);
		j++;
	}
}

void	index_sort(t_lst **start_a)
{
	int			i;
	static int	j = 0;
	t_lst		*lst;

	i = big_number(start_a);
	lst = (*start_a);
	while (lst)
	{
		if (i > lst->nbr && lst->index == -1)
			i = lst->nbr;
		lst = lst->next;
	}
	lst = *start_a;
	while (lst)
	{
		if (i == lst->nbr && lst->index == -1)
			lst->index = j++;
		lst = lst->next;
	}
}

int	big_number(t_lst **start_a)
{
	int		i;
	t_lst	*lst;

	lst = *start_a;
	i = lst->nbr;
	while (lst)
	{
		if (i < lst->nbr)
			i = lst->nbr;
		lst = lst->next;
	}
	return (i);
}
