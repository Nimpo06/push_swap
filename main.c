/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 15:14:44 by mayoub            #+#    #+#             */
/*   Updated: 2022/05/11 14:57:10 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_lst	**start_a;
	t_lst	**start_b;
	t_lst	*lst;
	int		count;

	if (!lst)
		return (NULL);
	count = argc - 1;
	start_a = malloc(sizeof(t_lst **));
	lst = *start_a;
	printf("%s\n", argv[1]);
	while (count)
	{
		lst = malloc(sizeof(t_lst));
		lst->nbr = ft_atoi(argv[1]);
		lst = lst->next;
		//printf("%d\n", lst->nbr);
		count--;
	}
	lst->next = NULL;
	return (0);
}
