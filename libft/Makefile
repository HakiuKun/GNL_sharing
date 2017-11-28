# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brobicho <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/08 19:44:04 by brobicho          #+#    #+#              #
#    Updated: 2017/11/17 18:14:43 by brobicho         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

FLAG = -Werror -Wall -Wextra

OBJ = $(SRC_FILES:.c=.o)

SRC_FILES = ft_strcat.c ft_isprint.c ft_putchar.c ft_putnbr.c ft_putstr.c \
			ft_strclr.c ft_strncat.c ft_isdigit.c ft_strcat.c ft_memdel.c \
			ft_strncpy.c ft_strcpy.c ft_strdel.c ft_toupper.c ft_strnew.c \
			ft_tolower.c ft_atoi.c ft_isalnum.c ft_isascii.c ft_bzero.c \
			ft_memcpy.c ft_memset.c ft_strnstr.c ft_strstr.c ft_memchr.c \
			ft_itoa.c ft_strlen.c ft_strdup.c ft_strlcat.c ft_memmove.c \
			ft_strchr.c ft_strrchr.c ft_strcmp.c ft_strncmp.c ft_isalpha.c \
			ft_isalpha.c ft_memccpy.c ft_memcmp.c ft_putchar_fd.c ft_memalloc.c \
			ft_striter.c ft_striteri.c ft_strmap.c ft_strmapi.c ft_strequ.c \
			ft_strnequ.c ft_strsub.c ft_strjoin.c ft_strtrim.c ft_putnbr.c \
			ft_strsplit.c ft_putstr_fd.c ft_putendl_fd.c ft_putendl.c \
			ft_putnbr_fd.c ft_lstnew.c ft_lstdelone.c ft_lstdel.c ft_lstadd.c \
			ft_lstiter.c ft_lstmap.c

HEADER = libft.h

all: $(NAME)

%.o: %.c
	$(CC) $(FLAG) -c $^ -o $@ -I $(HEADER) 

$(NAME): $(OBJ)
	ar -rc $(NAME) $(OBJ) $@ $^
	ranlib $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
