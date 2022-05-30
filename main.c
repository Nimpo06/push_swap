/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 15:14:44 by mayoub            #+#    #+#             */
/*   Updated: 2022/05/30 17:47:42 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	test(t_lst **lst)
{
	t_lst	*son;

	son = (*lst);
	while (son->next != NULL)
	{
		printf("%d\n", son->nbr);
		son = son->next;
	}
}

void	start(t_lst **lst, int argc, char **argv)
{
	int		i;
	t_lst	*son;

	i = 1;
	son = (*lst);
	if (argc <= 2)
		its_under_the_sauce();
	if (anti_occurrences(argv) == 1)
		tacos_taille_xl_nuggets_tenders_merguez_sauce_biggy_gratine();
	if (anti_result(argv) == 1)
		shrek_is_love_shrek_is_life();
	while (i < argc)
	{
		son = malloc(sizeof(t_lst));
		son->nbr = ft_atoi(argv[i]);
		printf("%d\n", son->nbr);
		son = son->next;
		i++;
	}
	printf("i : %d\n", i - 1);
	if ((i - 1) == 3)
		sa(&son);
	test(lst);
	//if ((i - 1) == 5)
	lst = NULL;
}

int	main(int argc, char **argv)
{
	t_lst	*start_a;
	t_lst	*start_b;
	t_lst	**lst;

	start_a = malloc(sizeof(t_lst *));
	start_b = malloc(sizeof(t_lst *));
	lst = &start_a;
	if (!lst)
		return (0);
	start(lst, argc, argv);
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
