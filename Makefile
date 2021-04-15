# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: icastell <icastell@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/09 12:10:34 by icastell          #+#    #+#              #
#    Updated: 2021/04/15 15:40:30 by icastell         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAGS = -Wall -Werror -Wextra -g

SRCS =	ft_memset.c\
		ft_bzero.c\
		ft_memcpy.c\
		ft_memccpy.c\
		ft_memmove.c\
		ft_memchr.c\
		ft_memcmp.c\
		ft_strlen.c\
		ft_strlcpy.c\
		ft_strlcat.c\
		ft_strchr.c\
		ft_strrchr.c\
		ft_strnstr.c\
		ft_strncmp.c\
		ft_atoi.c\
		ft_isalpha.c\
		ft_isdigit.c\
		ft_isalnum.c\
		ft_isascii.c\
		ft_isprint.c\
		ft_toupper.c\
		ft_tolower.c\
		ft_calloc.c\
		ft_strdup.c\
		ft_substr.c\

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(OBJS): $(SRCS)
	gcc $(FLAGS) -c $(SRCS)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

test:	re
		gcc -g -I. main.c libft.a -o a.out
		./a.out
clean:
	rm -f $(OBJS)

fclean:	clean
	rm -f $(NAME)

re: fclean all

.PHONY:	all clean fclean re