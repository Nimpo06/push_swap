/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   anti_occurrences.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 16:50:25 by mayoub            #+#    #+#             */
/*   Updated: 2022/05/28 18:58:37 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	anti_occurrences(char **argv)
{
	int	i;
	int	j;

	i = 0;
	while (argv[i])
	{
		j = i + 1;
		while (argv[j])
		{
			if (ft_atoi(argv[i]) == ft_atoi(argv[j]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	anti_result(char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = i + 1;
	if (*argv)
	{
		while (argv[i] < argv[j])
		{
			if (ft_atoi(argv[i]) > ft_atoi(argv[j]))
				return (0);
			i++;
			j++;
		}
		return (1);
	}
	return (0);
}
