# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agonzalv <agonzalv@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/08 17:41:16 by agonzalv          #+#    #+#              #
#    Updated: 2022/11/17 12:39:25 by agonzalv         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME  = libft.a
FLAGS = -Wall -Werror -Wextra
#Funciones obligatorias
SRCS    = ft_atoi.c    \
		  ft_bzero.c   \
		  ft_calloc.c  \
		  ft_isalnum.c \
		  ft_isalpha.c \
		  ft_isascii.c \
		  ft_isdigit.c \
		  ft_isprint.c \
		  ft_itoa.c    \
		  ft_memchr.c  \
		  ft_memcmp.c  \
		  ft_memcpy.c  \
		  ft_memmove.c \
		  ft_memset.c  \
		  ft_putchar_fd.c\
		  ft_putendl_fd.c\
		  ft_putnbr_fd.c \
		  ft_putstr_fd.c \
		  ft_split.c   \
		  ft_strchr.c  \
		  ft_strtrim.c \
		  ft_strdup.c  \
		  ft_striteri.c\
		  ft_strjoin.c \
		  ft_strlcat.c \
		  ft_strlcpy.c \
		  ft_strlen.c  \
		  ft_strmapi.c \
		  ft_strncmp.c \
		  ft_strnstr.c \
		  ft_strrchr.c \
		  ft_substr.c  \
		  ft_tolower.c \
		  ft_toupper.c 

BONUS_S =	ft_lstnew.c	\
			ft_lstadd_front.c	\
			ft_lstsize.c	\
			ft_lstlast.c	\
			ft_lstadd_back.c	\
			ft_lstdelone.c	\
			ft_lstclear.c	\
			ft_lstiter.c	\
			ft_lstmap.c

RM	=	rm -rf
FLAGS	=	-Wall -Wextra -Werror
#Crea y m antiene archivos de bliblioteca .o = objeto .d = dependencia
LIB	=	ar -rcs
OBJT	=	$(SRCS:.c=.o)
DEPT	=	$(SRCS:.c=d)
OBJTS	=	$(BONUS:.c=.d)
all:	$(NAME)
