# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/23 15:10:20 by mayoub            #+#    #+#              #
#    Updated: 2022/05/20 17:31:20 by mayoub           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILE	=	main.c 						\
			A/push_a.c 					\
			A/reverse_rotate_a.c 		\
			A/rotate_a.c 				\
			A/swap_a.c 					\
			B/push_b.c 					\
			B/reverse_rotate_b.c 		\
			B/rotate_b.c 				\
			B/swap_b.c 					\
			AB/reverse_rotate_a_b.c 	\
			AB/rotate_a_b.c 			\
			AB/swap_a_b.c				\
			lst_manip/ft_lstadd_back.c 	\
			lst_manip/ft_lstadd_front.c	\
			lst_manip/ft_lstclear.c 	\
			lst_manip/ft_lstdelone.c 	\
			lst_manip/ft_lstiter.c 		\
			lst_manip/ft_lstlast.c 		\
			lst_manip/ft_lstmap.c 		\
			lst_manip/ft_lstnew.c 		\
			lst_manip/ft_lstsize.c 		\
			error/error.c				\

LIBFT	=	./libft/

OBJ		=	${FILE:.c=.o}

NAME	=	push_swap

CC		=	gcc

CFLAGS	=	-Werror -Wall -Wextra -g

LIB		=	-lft -L$(LIBFT)

RM		=	rm -rf

%.o:	%.c
			${CC} ${CFLAGS} -o $< ${<:.c=.o}

$(NAME):
		$(LIB)
		$(CC) $(CFLAGS) $(FILE) -o $(NAME)

$(LIB):	@$(MAKE) -C $(LIBFT)

all:	${NAME}

clean:	${RM} ${OBJ}

fclean:	clean
		${RM} ${NAME}

re:		fclean all

.PHONY:	all clean fclean re
