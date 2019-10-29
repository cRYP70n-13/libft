# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: okimdil <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/17 17:58:34 by okimdil           #+#    #+#              #
#    Updated: 2019/10/22 21:09:17 by okimdil          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FUNC = ft_memcmp.c
FLAGS = -Wall -Wextra -Werror
NAME = libft.a
SRCO = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c

all : $(NAME)
	    @echo "Building Library."

$(NAME) :
	    gcc $(FLAGS) -c $(SRCO)
		    ar rc $(NAME) *.o

clean :
	    rm -rf *.o

fclean : clean
	    rm -rf $(NAME)

re : fclean all
