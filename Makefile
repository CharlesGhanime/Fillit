# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cghanime <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/21 15:30:03 by cghanime          #+#    #+#              #
#    Updated: 2019/01/21 15:41:23 by cghanime         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Fillit.a
CPL = gcc -Wall -Wextra -Werror
HEADER = -I Fillit.h
SRCS= 

OBJECTS = $(SRCS:.c=.o)
	all: $(NAME)

$(NAME): $(OBJECTS)
	$(CPL) $(HEADER) -c $(SRCS)
	ar -rcv $(NAME) $(OBJECTS)
	ranlib $(NAME)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY : all clean fclean re
