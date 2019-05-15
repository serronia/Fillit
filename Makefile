# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: jdarko <marvin@le-101.fr>                  +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2017/12/06 15:23:58 by jdarko       #+#   ##    ##    #+#        #
#    Updated: 2017/12/07 12:52:19 by mimignot    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

.PHONY: all re clean fclean $(NAME)

NAME = fillit
F_SRC = ft_sqrt.c check_tetri.c ft_bdd_t.c ft_check.c ft_t_clean.c\
		solving_tools.c reader.c main_t_clean.c solver.c quit.c
SRC= $(addprefix ./fill/, $(F_SRC))
OBJ = $(addprefix ./fill/, $(F_SRC:.c=.o))
HEAD = fill/fillit.h
FLAGS = -Wall -Werror -Wextra

all: $(NAME) 

$(NAME): $(OBJ)
	cd libft && $(MAKE)
	gcc $(FLAGS) $(OBJ) libft/libft.a -o  $(NAME)

%.o : %.c
	gcc $(FLAGS) -I $(HEAD) -o $@ -c $<

clean:
	rm -f $(OBJ)
	cd libft && make clean

fclean: 
	rm -f $(OBJ)
	rm -f $(NAME)
	cd libft && make fclean 

re: fclean all
