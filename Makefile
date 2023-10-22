NAME = libft.a

SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalpha.c ft_isascii.c ft_isprint.c ft_isdigit.c ft_isalnum.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strlen.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strcmp.c ft_strdup.c ft_strlcat.c ft_strlcpy.c

OBJ = $(SRC:.c=.o)

FLAG = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

%.o: %.c
	gcc $(FLAG) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all