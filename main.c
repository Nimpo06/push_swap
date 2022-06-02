/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 15:14:44 by mayoub            #+#    #+#             */
/*   Updated: 2022/06/02 20:28:32 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	test(t_lst **lst)
{
	t_lst	*son;

	son = (*lst);
	while (son != NULL)
	{
		printf("%d\n", son->nbr);
		son = son->next;
	}
}

void	start(t_lst **start_a, int argc, char **argv)
{
	int		i;
	t_lst	*son;

	i = 1;
	son = (*start_a);
	if (argc <= 2)
		its_under_the_sauce();
	if (anti_occurrences(argv) == 1)
		tacos_taille_xl_nuggets_tenders_merguez_sauce_biggy_gratine();
	if (anti_result(argv) == 1)
		shrek_is_love_shrek_is_life();
	while (i < argc)
	{
		son = ft_lstnew(ft_atoi(argv[i]));
		ft_lstadd_back(start_a, son);
		//printf("%d\n", son->nbr);
		i++;
	}
	if ((i - 1) == 3)
		ra(start_a);
	test(start_a);
}

int	main(int argc, char **argv)
{
	t_lst	*start_a;
	//t_lst	*start_b;

	// start_a = malloc(sizeof(t_lst));
	// start_b = malloc(sizeof(t_lst)); // pas la peine de men occuper mtnent
	// if (!start_a || !start_b)
	// 	return (0);
	start_a = NULL;
	start(&start_a, argc, argv);
	return (0);
}

/*int	main(int argc, char **argv)
{
	t_lst	**start_a;
	t_lst	**start_b;
	t_lst	*lst;
	int		i;

	if (argc < 2)
		its_under_the_sauce();
	i = argc - 1;
	*start_a = ft_lstnew(lst->content);
	*start_b = ft_lstnew(lst->content);
	lst = *start_a;
	if (!lst)
		return (0);
	while (i)
	{
		lst = malloc(sizeof(t_lst));
		lst->nbr = ft_atoi(argv[i]);
		lst = lst->next;
		i--;
	}
	lst->next = NULL;
	return (0);
}*/
