# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/23 15:10:20 by mayoub            #+#    #+#              #
#    Updated: 2022/06/28 18:12:08 by mayoub           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	push_swap

FILE		=	main						\
				A/push_a					\
				A/reverse_rotate_a			\
				A/rotate_a					\
				A/swap_a					\
				B/push_b					\
				B/reverse_rotate_b			\
				B/rotate_b					\
				B/swap_b					\
				AB/reverse_rotate_a_b		\
				AB/rotate_a_b				\
				AB/swap_a_b					\
				lst_manip/ft_lstadd_back	\
				lst_manip/ft_lstadd_front	\
				lst_manip/ft_lstclear		\
				lst_manip/ft_lstdelone		\
				lst_manip/ft_lstiter		\
				lst_manip/ft_lstlast		\
				lst_manip/ft_lstmap			\
				lst_manip/ft_lstnew			\
				lst_manip/ft_lstsize		\
				parsing/sweep_sweep_sweep	\
				error/error					\
				error/free					\
				sorting/short_sorting		\
				sorting/big_sorting			\

SRC_DIR		=	./

SRC			=	$(addprefix $(SRC_DIR), $(addsuffix .c, $(FILE)))

OBJ_DIR		=	./

OBJ			=	$(addprefix $(OBJ_DIR), $(addsuffix .o, $(FILE)))

LIBFT_DIR	=	./libft/

LIBFT		=	$(addprefix $(LIBFT_DIR), libft.a)

CC			=	gcc

CFLAGS		=	-Werror -Wall -Wextra -g -fsanitize=address

LIBRARIES	=	-lft -L$(LIBFT_DIR)

HEADERS		=	-I$(LIBFT_DIR)

RM			=	rm -rf

.c.o		:
				${CC} ${CFLAGS} ${HEADERS} -c $< -o ${<:.c=.o}

${NAME}		:	$(LIBFT) ${OBJ}
				@${CC} ${CFLAGS} ${LIBRARIES} ${OBJ} -o $@
				@echo "\033[0;37m\n##############################################\n"
				@echo "\033[1;32m 🥗 The push_swap files are ready 🥙 !!!\n\033[0;37m\n##############################################"
				@echo "\033[1;31m\nDONE !!! \033[1;32mHere your order 🍔 🍟 🍺 , Bon Appétit !!!\n"

$(LIBFT)	:
				@echo "\033[1;34m\n 😋 OKAY ! Let's do some good cook for dinner !!! 😋\n \033[0;37m\n##############################################\n\n\033[1;33m🥚 Let's fry the Libft 🥚 . . .\n"
				@$(MAKE) -C $(LIBFT_DIR)
				@echo "\033[1;32m \n🍳 Libft is cooked 🍳 !!!\n \033[0;37m\n##############################################\n"
				
				@echo "\033[1;35m🥕 Let's cook the push_swap files 🥬 . . .\n"			

all			:	${NAME}

clean		:
				@echo "\033[1;37m\n 😳 IT'S GROSS ??? 😳\n"
				${RM} ${OBJ}
				@$(MAKE) clean -C $(LIBFT_DIR)
				@echo "\n 🗑  Your dish has been cleaned 🗑\n"

fclean		:	clean
				${RM} ${NAME}
				@$(MAKE) fclean -C $(LIBFT_DIR)
				@echo "\n 🗑 💩 ALL our dish has been cleaned 💩 🗑\n"

re			:	fclean all
				@echo "\033[1;36m\n 👨‍🍳 Are you still hungry ? NO PROBLEMO ! 👩‍🍳\n"

sus			:
				@for (( i=1; i<=10000; i++ )) \
				do \
				clear \
				echo "\033[1;37m                                                        &&&&&###&&&&&&&&&"; \
				echo "                                                  &&##BBBBBBBBBBBBBBBBBBBBB###&&"; \
				echo "                                  &&&&###&    &&#BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB#&&"; \
				echo "                     &###&   &&##BBBBB#&  &&#BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB##&"; \
				echo "                &&##BB#&  &#BBBBBBB#&   &#BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB#&"; \
				echo "             &#BBBBB#&  &#B###BBB#   &#BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB#&"; \
				echo "          &#BBBBBBBB&  BBBB#&&&&  &#BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB#&"; \
				echo "        &BBBBBBBBBBB#&  &##BB#& &#BBBBBBBBBBBBBBBBBBBBBBBBBBBBB################BBBBBBBBBBBBBBB#"; \
				echo "      &BBBBBBBBBBBBBBBB#&&  & &#BBBBBBBBBBBBBBBBBBBBBBB#################################BBBBBBB#&"; \
				echo "     #BBBBBBBBBBBBBBBBBBBB####BBBBBBBBBBBBBBBBBBBB###########################################BBBB&"; \
				echo "    &BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB##################################################BB&"; \
				echo "    &BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB########################################################&"; \
				echo "     #BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB###########################################################"; \
				echo "      &&&&&&#BBBBBBBBBBBBBBBBBBBBBBBBBB#############################################################"; \
				echo "  &#BP55PG#  BBBBBBBBBBBBBBBBBBBBBBB################################################################"; \
				echo "B5YY55PGB#  #BBBBBB##BBBBBBBBBBBBB##################################################################"; \
				echo "BBB##&&  &#BBB########BBBBBBBBBB####################################################################"; \
				echo "         &###############BBBBB######################################################################"; \
				echo "          &#########################################################################################"; \
				echo "            &#######################################################################################"; \
				echo "             &######################################################################################"; \
				echo "               &###################################################################################&"; \
				echo "                 &################################################################################& "; \
				echo "                   &#############################################################################&  "; \
				echo "                     ###########################################################################&   "; \
				echo "                      &########################################################################&    "; \
				echo "                        ######################################################################&     "; \
				echo "                         &###################################################################       "; \
				echo "                          &###################################################&&&&#########&        "; \
				echo "                           &############################################&&&@@@@&#########&          "; \
				echo "                            &####################################&&&@@@@@@&&&##########&            "; \
				echo "                             &#############################&&&           &##########&               "; \
				echo "                              #####################&&&&                  &#######&                  "; \
				echo "                               #################&                        ###&&&                     "; \
				echo "                               &###############&                                                    "; \
				echo "                                &#############&                                                     "; \
				echo "                                 ############&                                                      "; \
				echo "                                 &#######&&&                                                        "; \
				echo "                                  ##&&                                                              "; \
				echo $$i 💀 SUSSY BAKA 💀\\n; \
				done

.PHONY		:	all clean fclean re sus debug
