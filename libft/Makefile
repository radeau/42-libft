# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kpoquita <kpoquita@42abudhabi.ae>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/15 23:53:30 by kpoquita          #+#    #+#              #
#    Updated: 2021/10/18 10:59:02 by kpoquita         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =  ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
		ft_memcpy.c ft_memset.c ft_strlen.c ft_tolower.c ft_toupper.c ft_strncmp.c \
		ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strnstr.c ft_strdup.c \
		ft_substr.c ft_putchar_fd.c ft_putstr_fd.c ft_memmove.c ft_calloc.c \
		ft_atoi.c ft_memchr.c \

OBJS = $(SRCS:.c=.o)

CC = gcc

RM = rm -f

CFLAGS = -Wall -Wextra -Werror -I.

NAME = libft.a


all:	$(NAME) 

$(NAME):	$(OBJS)
			ar rcs $(NAME) $(OBJS)
			ranlib $(NAME)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:		fclean all

so:	
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRCS)
	gcc -nostartfiles -shared -o libft.so $(OBJS)

.PHONY:		all clean fclean re
