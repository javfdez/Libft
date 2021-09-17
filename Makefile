# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: javferna <javferna@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/05 17:27:03 by javferna          #+#    #+#              #
#    Updated: 2021/09/17 18:31:24 by javferna         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =	ft_isalpha.c	\
		ft_isdigit.c	\
		ft_isalnum.c	\
		ft_isascii.c	\
		ft_isprint.c	\
		ft_strlen.c		\
		ft_memset.c		\
		ft_bzero.c		\
		ft_memcpy.c		\
		ft_memmove.c	\
		ft_strlcpy.c	\
		ft_strlcat.c	\
		ft_toupper.c	\
		ft_tolower.c	\
		ft_strchr.c		\
		ft_strrchr.c	\
		ft_strncmp.c	\
		ft_memchr.c		\
		ft_memcmp.c		\
		ft_strnstr.c	\
		ft_atoi.c		\
		ft_calloc.c		\
		ft_strdup.c		\
		ft_substr.c		\
		ft_strjoin.c	\
		ft_strtrim.c	\
		ft_split.c		\
		ft_itoa.c		\
		ft_strmapi.c	\
		ft_striteri.c	\
		ft_putchar_fd.c	\
		ft_putstr_fd.c	\
		ft_putendl_fd.c	\
		ft_putnbr_fd.c	\

SRCBONUS =	ft_lstnew_bonus.c		\
			ft_lstadd_front_bonus.c	\
			ft_lstsize_bonus.c		\
			ft_lstlast_bonus.c		\
			ft_lstadd_back_bonus.c	\
			ft_lstdelone_bonus.c	\
			ft_lstclear_bonus.c		\
			ft_lstiter_bonus.c		\
			ft_lstmap_bonus.c		\

SRCH = libft.h

OBJ = $(SRC:.c=.o)

OBJBONUS = $(SRCBONUS:.c=.o)

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

.PHONY = all clean fclean bonus re rebonus
