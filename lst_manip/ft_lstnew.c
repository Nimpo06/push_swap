/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 11:16:50 by mayoub            #+#    #+#             */
/*   Updated: 2022/06/24 18:18:11 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_lst	*ft_lstnew(int nbr)
{
	t_lst	*new;

	new = (t_lst *)malloc(sizeof(*new));
	if (!new)
		return (NULL);
	new->nbr = nbr;
	new->index = -1;
	new->next = NULL;
	return (new);
}
