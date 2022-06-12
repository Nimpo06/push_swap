/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 15:14:44 by mayoub            #+#    #+#             */
/*   Updated: 2022/06/12 16:20:03 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	test(t_lst **lst_a, t_lst **lst_b)
{
	t_lst	*son_a;
	t_lst	*son_b;
	int		i;
	int		j;

	i = 1;
	j = 1;
	son_a = (*lst_a);
	son_b = (*lst_b);
	printf("A			B\n------			------\n");
	// printf("%d ---> maillon n'%d	NULL\n", son_a->nbr, i);
	while (son_a->next != NULL || son_b != NULL)
	{
		if (son_b != NULL)
		{
			printf("%d ---> maillon n'%d	%d ---> maillon n'%d\n", son_a->nbr, i, son_b->nbr, j);
			son_b = son_b->next;
			j++;
			son_a = son_a->next;
			i++;
		}
		else
		{
			printf("%d ---> maillon n'%d	NULL\n", son_a->nbr, i);
			son_a = son_a->next;
			i++;
		}
	}
	printf("%d ---> maillon n'%d	NULL \n", son_a->nbr, i);
}

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
	//pb(&start_a, &start_b);
	pb(&start_a, &start_b);
	pa(&start_a, &start_b);
	test(&start_a, &start_b);
	//system("leaks push_swap");
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
