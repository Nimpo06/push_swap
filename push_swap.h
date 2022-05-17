/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 15:10:32 by mayoub            #+#    #+#             */
/*   Updated: 2022/05/17 15:33:40 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <errno.h>

typedef struct s_lst
{
	int				nbr;
	int				index;
	struct s_lst	*next;
}	t_lst;

int		ft_atoi(const char *str);

/*----------ERROR----------*/

void	its_under_the_sauce(void);

#endif
