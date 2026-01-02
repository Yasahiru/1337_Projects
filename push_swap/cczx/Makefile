# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hloutman <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/29 22:51:38 by hloutman          #+#    #+#              #
#    Updated: 2025/12/31 22:40:55 by hloutman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = ft_isdigit.c \
      ft_strlen.c \
      ft_strncmp.c \
      ft_atoi.c ft_strdup.c \
      ft_strjoin.c \
      ft_lstnew_bonus.c \
      ft_lstadd_back_bonus.c \
      ft_lstlast_bonus.c \
      ft_split.c

OBJ = $(SRC:.c=.o)

BONUS_SRC = ft_lstnew_bonus.c ft_lstadd_back_bonus.c  ft_lstlast_bonus.c
            #  ft_lstadd_front_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c \
            #  ft_lstmap_bonus.c

# BONUS_OBJ = $(BONUS_SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

bonus: $(BONUS_OBJ)
	ar rcs $(NAME) $(BONUS_OBJ)

clean:
	rm -f $(OBJ) $(BONUS_OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean bonus fclean re
