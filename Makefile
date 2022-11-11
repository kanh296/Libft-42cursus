# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nghoang <nghoang@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/13 05:04:38 by nghoang           #+#    #+#              #
#    Updated: 2022/11/11 15:24:14 by nghoang          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAGS = gcc -Wall -Wextra -Werror

SOURCES = ft_isalnum.c ft_isprint.c ft_memcmp.c  ft_putchar_fd.c ft_split.c \
			ft_strlcat.c ft_strncmp.c ft_substr.c ft_atoi.c ft_isalpha.c \
			ft_itoa.c ft_memcpy.c ft_putendl_fd.c ft_strchr.c ft_strlcpy.c \
			ft_strnstr.c ft_tolower.c ft_bzero.c ft_isascii.c ft_strrchr.c\
			ft_memmove.c ft_putnbr_fd.c ft_strdup.c ft_strlen.c ft_striteri.c \
			ft_toupper.c ft_calloc.c ft_isdigit.c ft_memchr.c ft_memset.c \
			ft_putstr_fd.c ft_strjoin.c ft_strmapi.c ft_strtrim.c ft_substr.c
			
BONUS = ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c ft_lstclear_bonus.c \
					ft_lstdelone_bonus.c ft_lstiter_bonus.c ft_lstlast_bonus.c \
					ft_lstnew_bonus.c ft_lstsize_bonus.c

OBJECTS = $(SOURCES:.c=.o)

BONUS_OBJECTS = $(BONUS:.c=.o)

HEADER = libft.h

all: $(NAME)

$(NAME):
		$(FLAGS) -c $(SOURCES) -I $(HEADER)
		ar rc $(NAME) $(OBJECTS)
		ranlib $(NAME)

clean:
		@rm -f $(OBJECTS) $(BONUS_OBJECTS)

fclean: clean
		@rm -f $(NAME)

re: fclean $(NAME)

bonus:
		$(FLAGS) -c $(BONUS) -I $(HEADER)
		ar rc $(NAME) $(BONUS_OBJECTS)
		ranlib $(NAME)

.PHONY: all, clean, fclean, re, bonus
