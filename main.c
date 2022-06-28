/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 15:14:44 by mayoub            #+#    #+#             */
/*   Updated: 2022/06/28 18:07:14 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	the_sort_guardian(t_lst **start_a)
{
	t_lst	*son_1;
	t_lst	*son_2;

	son_1 = (*start_a);
	son_2 = (*start_a)->next;
	while (son_1)
	{
		if (son_1->nbr > son_2->nbr)
			return (1);
		son_1 = son_1->next;
		son_2 = son_2->next;
	}
	return (0);
}

void	start(t_lst **start_a, t_lst **start_b, int argc, char **argv)
{
	int		i;
	t_lst	*son;

	(void) **start_b;
	i = 1;
	son = (*start_a);
	if (argc <= 1)
		exit(0);
	if (argc > 2)
	{
		sweeper(argc, argv);
		while (i < argc)
		{
			son = ft_lstnew(ft_atoi(argv[i]));
			ft_lstadd_back(start_a, son);
			if (ft_isdigit(*argv[i]) == 0)
				error();
			i++;
		}
	}
	else
		sweeper_quotes(argv, start_a);
}

int	main(int argc, char **argv)
{
	t_lst	*start_a;
	t_lst	*start_b;

	start_a = NULL;
	start_b = NULL;
	start(&start_a, &start_b, argc, argv);
	sorting(&start_a, &start_b);
	return (0);
}
