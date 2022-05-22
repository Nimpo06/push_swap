/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 15:10:32 by mayoub            #+#    #+#             */
/*   Updated: 2022/05/21 15:58:41 by mayoub           ###   ########.fr       */
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
	int				content;
	struct s_lst	*next;
}	t_lst;

int		ft_atoi(const char *str);

/*------------A------------*/

void	pa(t_lst **start_a, t_lst **start_b);
void	rra(t_lst **start_a);
void	ra(t_lst **start_a);
void	sa(t_lst **start_a);

/*------------B------------*/

void	pb(t_lst **start_b, t_lst **start_a);
void	rrb(t_lst **start_b);
void	rb(t_lst **start_b);
void	sb(t_lst **start_b);

/*-----------A&B-----------*/

void	rrr(t_lst **start_a, t_lst **start_b);
void	rr(t_lst **start_a, t_lst **start_b);
void	ss(t_lst **start_a, t_lst **start_b);

/*--------lst_manip--------*/

void	ft_lstadd_back(t_lst **lst, t_lst *new);
void	ft_lstadd_front(t_lst **alst, t_lst *new);
void	ft_lstclear(t_lst **lst, int del(int));
void	ft_lstdelone(t_lst *lst, int del(int));
void	ft_lstiter(t_lst *lst, void (*f)(t_lst *content));
t_lst	*ft_lstlast(t_lst *lst);
t_lst	*ft_lstmap(t_lst *lst, void *(*f)(void *), int del(int));
t_lst	*ft_lstnew(int content);
int		ft_lstsize(t_lst *lst);

/*----------ERROR----------*/

void	its_under_the_sauce(void);

#endif
