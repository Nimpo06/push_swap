/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 15:14:44 by mayoub            #+#    #+#             */
/*   Updated: 2022/05/24 18:29:58 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*int	main(int argc, char **argv)
{
	t_lst	**start_a;
	t_lst	**start_b;
	t_lst	*lst;
	int		count;

	if (argc < 2)
		its_under_the_sauce();
	count = argc - 1;
	start_a = malloc(sizeof(t_lst **));
	start_b = malloc(sizeof(t_lst **));
	lst = *start_a;
	if (!lst)
		return (0);
	printf("%s\n", argv[1]);
	while (count)
	{
		lst = malloc(sizeof(t_lst));
		lst->nbr = ft_atoi(argv[count]);
		lst = lst->next;
		printf("%d\n", count);
		count--;
	}
	lst->next = NULL;
	return (0);
}*/

int	main(int argc, char **argv)
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
}
