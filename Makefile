# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile2                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gjeanmai <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/15 15:44:13 by gjeanmai          #+#    #+#              #
#    Updated: 2016/11/16 04:05:42 by gjeanmai         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
CFLAG = -Wall -Wextra -Werror

SRC = ft_abs.c \
	  ft_atoi.c \
	  ft_bzero.c \
	  ft_nblen.c \
	  ft_isalpha.c \
	  ft_isalnum.c \
	  ft_isascii.c \
	  ft_isdigit.c \
	  ft_isprint.c \
	  ft_itoa.c \
	  ft_lstadd.c \
	  ft_lstaddback.c \
	  ft_lstdel.c \
	  ft_lstdelone.c \
	  ft_lstiter.c \
	  ft_lstmap.c \
	  ft_lstnew.c \
	  ft_memalloc.c \
	  ft_memccpy.c \
	  ft_memchr.c \
	  ft_memcmp.c \
	  ft_memcpy.c \
	  ft_memdel.c \
	  ft_memmove.c \
	  ft_memset.c \
	  ft_putchar.c \
	  ft_putchar_fd.c \
	  ft_putendl.c \
	  ft_putendl_fd.c \
	  ft_putnbr.c \
	  ft_putnbr_fd.c \
	  ft_putstr.c \
	  ft_putstr_fd.c \
	  ft_strcat.c \
	  ft_strchr.c \
	  ft_strclr.c \
	  ft_strcmp.c \
	  ft_strcpy.c \
	  ft_strdel.c \
	  ft_strdup.c \
	  ft_strequ.c \
	  ft_striter.c \
	  ft_striteri.c \
	  ft_strlcat.c \
	  ft_strlen.c \
	  ft_strjoin.c \
	  ft_strmap.c \
	  ft_strmapi.c \
	  ft_strncat.c \
	  ft_strncmp.c \
	  ft_strncpy.c \
	  ft_strnequ.c \
	  ft_strnew.c \
	  ft_strnstr.c \
	  ft_strrchr.c \
	  ft_strrev.c \
	  ft_strrstr.c \
	  ft_strsplit.c \
	  ft_strsub.c \
	  ft_strstr.c \
	  ft_strtrim.c \
	  ft_swap.c \
	  ft_tolower.c \
	  ft_toupper.c

OBJ = $(SRC:.c=.o)
AR = ar rc
RLIB = ranlib
HDR = -I libft.h
RM = rm -f

all: $(NAME)

$(NAME): $(OBJ)
	@$(AR) $(NAME) $(OBJ)
	@$(RLIB) $(NAME)

%.o: %.c
	@echo $@
	@$(CC) $(CFLAG) -o $@ -c $<
	@echo "  Well done"

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all
