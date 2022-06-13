SRCS		= 	ft_putchar.c \
				ft_print_str.c \
				ft_print_chr.c \
				ft_print_int.c \
				ft_print_putnbr.c \
				ft_print_hex.c \
				ft_print_hex2.c \
				ft_print_ptr.c \
				ft_printf.c \

OBJS		= $(SRCS:.c=.o)
OBJS_BONUS	= $(SRCS_BONUS:.c=.o)
NAME		= libftprintf.a
CC			= gcc
CFLAGS		= -Wall -Wextra -Werror
RM			= rm -f

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -I Libft -o $(<:.c=.o)

$(NAME): $(OBJS)
	@make -C Libft
	@cp Libft/libft.a $(NAME)
	ar -rc $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)
	$(RM) $(OBJS_BONUS)

fclean: clean
	$(RM) $(NAME)
	@make -sC ./Libft/ clean

re: fclean all

.PHONY: all clean fclean re
