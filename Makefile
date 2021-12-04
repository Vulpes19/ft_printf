NAME = libftprintf.a
SRC = ft_putchar.c ft_putnbr.c ft_putstr.c ft_putnbr_unsigned.c\
 ft_hex_up.c ft_hex_low.c ft_paddress.c ft_printf.c
OBJ = $(SRC:.c=.o)
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs

all: $(NAME)

%.o: %.c
	cc $(CFLAGS) -c $<
	$(AR) $(NAME) $@

$(NAME): $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re