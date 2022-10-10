NAME  = libft.a

SRCS    = ft_isalnum.c ft_isalpha.c  ft_isascii.c ft_isdigit.c  ft_isprint.c  ft_strlen.c  ft_tolower.c  ft_toupper.c  ft_strchr.c  ft_memset.c  ft_memchr.c
OBJS	= $(SRCS:.c=.o)
CFLAGS  = -Wall -Werror -Wextra

all: $(NAME)
$(NAME) : $(OBJS)
	ar rcs  $(NAME) $(OBJS)

%.o : %.c
	gcc -c $(CFLAGS) $< -o $@

.PHONY: clean fclean
clean:
	@rm -f *.o $(NAME)

fclean: clean
	@rm -f $(NAME)

re: fclean all
