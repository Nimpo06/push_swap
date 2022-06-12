/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sweep_sweep_sweep.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 16:50:25 by mayoub            #+#    #+#             */
/*   Updated: 2022/06/12 12:12:01 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	free_from_desire(char **split)
{
	int	i;

	i = 0;
	while (split[i])
		free(split[i++]);
	free(split);
}

int	anti_occurrences(char **argv)
{
	int	i;
	int	j;

	i = 1;
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

int	anti_result(char **argv, int start)
{
	int	i;
	int	j;

	i = start;
	j = i + 1;
	if (*argv)
	{
		while (argv[j])
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

int	sweeper(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc <= 1)
		its_under_the_sauce();
	if (anti_occurrences(argv) == 1)
		tacos_taille_xl_nuggets_tenders_merguez_sauce_biggy_gratine();
	if (anti_result(argv, 1) == 1)
		shrek_is_love_shrek_is_life();
	return (0);
}

int	sweeper_quotes(char **argv, t_lst **start_a)
{
	int		i;
	char	**split;
	t_lst	*son;

	i = 0;
	split = ft_split(argv[1], ' ');
	son = (*start_a);
	if (split[i] == '\0')
		tiplouf_je_le_rotis();
	while (split[i] != '\0')
	{
		son = ft_lstnew(ft_atoi(split[i]));
		ft_lstadd_back(start_a, son);
		if (ft_isdigit(*split[i]) == 0)
			tiplouf_je_le_rotis();
		i++;
	}
	if (anti_occurrences(split) == 1)
		tacos_taille_xl_nuggets_tenders_merguez_sauce_biggy_gratine();
	if (anti_result(split, 0) == 1)
		shrek_is_love_shrek_is_life();
	free_from_desire(split);
	return (0);
}
