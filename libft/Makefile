# ********************************************************************************* #
#                                                                                   #
#                                                              :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                          +:+ +:+         +:+      #
#    By: kpoquita <kpoquita@student.42abudhabi.ae>       +#+  +:+       +#+         #
#                                                      +#+#+#+#+#+   +#+            #
#    Created: 2021/10/07 19:56:46 by kpoquita               #+#    #+#              #
#    Updated: 2021/10/08 10:29:48 by kpoquita         ###   ########.fr        #
#                                                                                   #
# ********************************************************************************* #

SRCS =  ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
		ft_memcpy.c ft_memset.c ft_strlen.c ft_tolower.c ft_toupper.c ft_strncmp.c \
		ft_strlcpy.c ft_strlcat.c \

OBJS = $(SRCS:.c=.o)

CC = gcc

RM = rm -f

CFLAGS = -Wall -Wextra -Werror -I.

NAME = libft.a


all:	$(NAME) 

$(NAME):	$(OBJS)
			ar rcs $(NAME) $(OBJS)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean $(NAME)

.PHONY:		all clean fclean re
