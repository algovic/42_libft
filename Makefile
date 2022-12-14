# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agonzalv <agonzalv@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/08 17:41:16 by agonzalv          #+#    #+#              #
#    Updated: 2022/11/17 13:37:34 by agonzalv         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a
SRCS	=	ft_atoi.c \
			ft_isdigit.c \
			ft_isalpha.c \
			ft_isalnum.c \
			ft_isascii.c \
			ft_isprint.c \
			ft_strlen.c \
			ft_memset.c \
			ft_bzero.c \
			ft_memcpy.c	\
			ft_memmove.c \
			ft_strlcpy.c \
			ft_strlcat.c \
			ft_toupper.c \
			ft_tolower.c \
			ft_memchr.c \
			ft_strchr.c \
			ft_strrchr.c \
			ft_strncmp.c \
			ft_memcmp.c \
			ft_strnstr.c \
			ft_calloc.c \
			ft_strdup.c \
			ft_substr.c \
			ft_strjoin.c \
			ft_strtrim.c \
			ft_split.c \
			ft_itoa.c \
			ft_strmapi.c \
			ft_striteri.c \
			ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c
BONUS_S = 	ft_lstnew.c \
		ft_lstadd_front.c \
		ft_lstsize.c \
		ft_lstlast.c \
		ft_lstadd_back.c \
		ft_lstdelone.c \
		ft_lstclear.c \
		ft_lstiter.c \
		ft_lstmap.c

BONUS_O	= 	$(BONUS_S:.c=.o)
OBJS	= 	$(SRCS:.c=.o)
CC	= 	gcc
RM	= 	rm -f
LIBC	= 	ar -rcs
FLAGS	= 	-Wall -Wextra -Werror

.c.o :
	${CC} ${FLAGS} -c $< -o ${<:.c=.o}

$(NAME): ${OBJS}
	$(LIBC) $(NAME) $(OBJS)

all: $(NAME)

bonus:	$(NAME) $(BONUS_O)
	$(LIBC) $(NAME) $(BONUS_O)

fclean: clean
	$(RM) $(NAME)

clean:
	$(RM) $(OBJS) $(BONUS_O)

re: fclean all

.PHONY: all clean fclean re .c.o bonus

