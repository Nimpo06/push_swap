/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 06:38:49 by mayoub            #+#    #+#             */
/*   Updated: 2022/06/28 14:57:02 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include "../push_swap.h"

int	ft_atoi(const char *str)
{
	int		i;
	long	j;
	long	n;

	i = 0;
	j = 1;
	n = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			j = j * -1;
		i++;
		if (str[i] == '+' || str[i] == '-')
			return (0);
	}
	while (str[i] >= '0' && str [i] <= '9')
	{
		n = n * 10 + (str[i] - '0');
		i++;
	}
	if ((n * j) > INT_MAX || (n * j) < INT_MIN)
		error();
	return (n * j);
}
