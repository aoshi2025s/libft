NAME = libft.a
SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
	   ft_isprint.c ft_strlen.c
OBJS = $(SRCS:.c=.o)
CC = clang
CFLAG = -Wall -Wextra -Werror

$(NAME) : $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

all : $(NAME)

.c.o:
	$(CC) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
