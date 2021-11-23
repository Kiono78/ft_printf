# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bterral <bterral@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/23 10:52:39 by bterral           #+#    #+#              #
#    Updated: 2021/11/23 17:13:54 by bterral          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS_FILES = ft_printf.c handle_format.c handle_char_string.c handle_figures.c \
			handle_pointer.c

SRCS_FOLDER = ./srcs/

SRCS = $(addprefix ${SRCS_FOLDER},${SRCS_FILES})

OBJS = ${SRCS:.c=.o}

SRCS_FILES_LIBFT = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
		ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c \
		ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c \
		ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c \
		ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c \
		ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c \
		ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c

SRCS_FOLDER_LIBFT = ./libft/

SRCS_LIBFT = $(addprefix ${SRCS_FOLDER_LIBFT},${SRCS_FILES_LIBFT})

OBJS_LIBFT = ${SRCS_LIBFT:.c=.o}

CC = gcc

CFLAGS = -Wall -Wextra -Werror

AR = ar rcs

RM = rm -f

INCLUDES = ./includes/ft_printf.h ./libft/libft.h

all: ${NAME}

%.o: %.c ${INCLUDES}
	${CC} ${CFLAGS} -c -o $@ $<

${NAME}: ${OBJS} ${OBJS_LIBFT}
	$(MAKE) -C ./libft
	cp ./libft/libft.a ${NAME}
	${AR} ${NAME} ${OBJS}

clean:
	${RM} ${OBJS}
	$(MAKE) clean -C ./libft

fclean: clean
	${RM} ${NAME}
	$(MAKE) fclean -C ./libft

re: fclean all

.PHONY: all bonus clean fclean re
