# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nghoang <nghoang@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/13 05:04:38 by nghoang           #+#    #+#              #
#    Updated: 2022/11/09 17:41:34 by nghoang          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAGS = gcc -Wall -Wextra -Werror

SOURCES = *.c #TODO: remove wildcards

OBJECTS = *.o

HEADER = *.h

all: $(NAME)

$(NAME):
		$(FLAGS) -c $(SOURCES) -I $(HEADER)
		ar rc $(NAME) $(OBJECTS)
		ranlib $(NAME)

clean:
		@rm -f $(OBJECTS)

fclean: clean
		@rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
