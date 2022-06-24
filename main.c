/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 15:14:44 by mayoub            #+#    #+#             */
/*   Updated: 2022/06/24 21:25:20 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	start(t_lst **start_a, t_lst **start_b, int argc, char **argv)
{
	int		i;
	t_lst	*son;

	(void) **start_b;
	i = 1;
	son = (*start_a);
	if (argc <= 1)
		its_under_the_sauce();
	if (argc > 2)
	{
		sweeper(argc, argv);
		while (i < argc)
		{
			son = ft_lstnew(ft_atoi(argv[i]));
			ft_lstadd_back(start_a, son);
			if (ft_isdigit(*argv[i]) == 0)
				tiplouf_je_le_rotis();
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
