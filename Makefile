# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: javferna <javferna@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/05 17:27:03 by javferna          #+#    #+#              #
#    Updated: 2021/09/07 11:35:36 by javferna         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =	ft_isalpha.c	\
		ft_isdigit.c	\
		ft_isalnum.c	\
		ft_isascii.c	\
		ft_isprint.c	\
		ft_strlen.c		\
		ft_memset.c		\
		ft_substr.c		\
		ft_strjoin.c	\

SRCBONUS =

SRCH = libft.h

OBJ = $(SRC:%.c=%.o)

OBJBONUS = $(SRCBONUS:%.c=%.o)

AR = ar rcs

RM = rm -f

CC = gcc

CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

$(NAME): $(OBJ) $(SRCH)
	$(AR) $(NAME) $(OBJ)

all: $(NAME)

bonus: $(OBJ) $(OBJBONUS) $(SRCH)
	$(AR) $(NAME) $(OBJ) $(OBJBONUS)

clean:
	$(RM) $(OBJ) $(OBJBONUS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

rebonus: fclean bonus
