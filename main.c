/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 15:14:44 by mayoub            #+#    #+#             */
/*   Updated: 2022/05/25 19:06:51 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	start(t_lst *lst, int argc, char **argv)
{
	int	count;

	count = 1;
	if (argc <= 2)
		its_under_the_sauce();
	while (count < argc)
	{
		lst = malloc(sizeof(t_lst));
		lst->nbr = ft_atoi(argv[count]);
		printf("%d\n", lst->nbr);
		lst = lst->next;
		count++;
	}
	lst = NULL;
	if (anti_occurrences(lst) == 1)
		tacos_taille_XL_nuggets_tenders_merguez_sauce_biggy();
}

int	main(int argc, char **argv)
{
	t_lst	**start_a;
	t_lst	**start_b;
	t_lst	*lst;

	start_a = malloc(sizeof(t_lst **));
	start_b = malloc(sizeof(t_lst **));
	lst = *start_a;
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
