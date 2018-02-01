# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gkabongo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/24 09:15:08 by gkabongo          #+#    #+#              #
#    Updated: 2017/11/24 09:15:19 by gkabongo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = filler

SRC = main.c\
	  find_player.c\
	  check_piece.c\
	  get_info.c\
	  get_map.c\
	  get_next_line.c\
	  player.c\

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
		make -C libft/ fclean && make -C libft/
		gcc -Wall -Wextra -Werror -c $(SRC)
		gcc -Wall -Wextra -Werror $(OBJ) libft/libft.a -o $(NAME)

clean:
		/bin/rm -f $(OBJ)
		make -C libft/clean

fclean:
		/bin/rm -f $(NAME)
		/bin/rm -f libft/libft.a
		/bin/rm -f *.o
		/bin/rm -f libft/*.o

re: fclean all
