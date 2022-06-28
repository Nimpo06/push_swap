/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 15:10:32 by mayoub            #+#    #+#             */
/*   Updated: 2022/06/28 18:12:51 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <errno.h>
# include <limits.h>

/*------LISTE CHAINÉE------*/

typedef struct s_lst{
	int				nbr;
	int				index;
	int				content;
	struct s_lst	*next;
}	t_lst;

/*----------ALGO----------*/

int		the_sort_guardian(t_lst **start_a);
int		big_number(t_lst **start_a);
void	sorted_index(char **argv);
void	sorting(t_lst **start_a, t_lst **start_b);
void	short_sorting_3(t_lst **start_a);
void	short_sorting_4(t_lst **start_a, t_lst **start_b);
void	short_sorting_5(t_lst **start_a, t_lst **start_b);
void	big_sorting(t_lst **start_a, t_lst **start_b);
void	index_sort(t_lst **start_a);

/*-----------MAIN----------*/

void	start(t_lst **start_a, t_lst **start_b, int argc, char **argv);
void	test(t_lst **lst_a, t_lst **lst_b);

/*------------A------------*/

void	pa(t_lst **start_a, t_lst **start_b);
void	rra(t_lst **start_a);
void	ra(t_lst **start_a);
void	sa(t_lst **start_a);

/*- - - - - - + - - - - - -*/

void	reversed(t_lst **start_a);
int		is_trier(t_lst **start_a);

/*------------B------------*/

void	pb(t_lst **start_a, t_lst **start_b);
void	rrb(t_lst **start_b);
void	rb(t_lst **start_b);
void	sb(t_lst **start_b);

/*-----------A B-----------*/

void	rrr(t_lst **start_a, t_lst **start_b);
void	rrr2(t_lst **start_b);
void	rr(t_lst **start_a, t_lst **start_b);
void	rr2(t_lst **start_b);
void	ss(t_lst **start_a, t_lst **start_b);
void	ss2(t_lst **start_b);

/*--------LST MANIP--------*/

void	ft_lstadd_back(t_lst **lst, t_lst *new);
void	ft_lstadd_front(t_lst **alst, t_lst *new);
void	ft_lstclear(t_lst **lst, int del(int));
void	ft_lstdelone(t_lst *lst, int del(int));
void	ft_lstiter(t_lst *lst, void (*f)(t_lst *content));
t_lst	*ft_lstlast(t_lst *lst);
t_lst	*ft_lstmap(t_lst *lst, void *(*f)(void *), int del(int));
t_lst	*ft_lstnew(int content);
int		ft_lstsize(t_lst *lst);

/*----------UTILS----------*/

int		ft_atoi(const char *str);
char	**ft_split(char *s, char c);
int		ft_isdigit(int c);
void	ft_putstr_fd(char *s, int fd);

/*---------PARSING---------*/

int		sweeper(int argc, char **argv);
int		sweeper_quotes(char **argv, t_lst **start_a);
int		the_signs_guardian(int argc, char **argv);
int		anti_occurrences(char **argv, int start);
int		anti_result(char **argv, int start);

/*----------ERROR----------*/

void	error(void);
void	free_from_desire(char **split);

#endif
