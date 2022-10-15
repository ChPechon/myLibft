# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jchawsar <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/26 22:46:50 by jchawsar          #+#    #+#              #
#    Updated: 2022/10/15 09:30:58 by jchawsar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_isalpha.c ft_isdigit.c ft_isascii.c ft_isalnum.c ft_isprint.c ft_toupper.c ft_tolower.c\
       ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c\
	   ft_strlen.c ft_strdup.c ft_strlcpy.c ft_strncmp.c ft_strchr.c ft_strrchr.c ft_atoi.c ft_strnstr.c\
	   ft_strlcat.c\
       ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_calloc.c\



#SRCSB =

OBJS := $(SRCS:.c=.o)
OBJSB := $(SRCSB:.c=.o)
all: $(NAME)

.c.o:
	gcc -Wall -Wextra -Werror -c $< -o $(<:.c=.o)

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)
bonus: $(NAME) $(OBJSB)
	ar -rcs $(NAME) $(OBJSB)
clean:
	rm -f $(OBJS) $(OBJSB)
fclean: clean
	rm -f $(NAME) $(bonus)
re: fclean all
