NAME	= libftprintf.a

SRCS	= ./src/ft_printf.c ./src/ft_printf_c.c ./src/ft_printf_s.c ./src/ft_printf_d.c

OBJS	= $(SRCS:.c=.o)

.c.o:
			cc $(CFLAGS) -c $< -o $(<:.c=.o) -I ./include

RM		= rm -f

CFLAGS	= -Wall -Werror -Wextra

$(NAME):	$(OBJS)
			make -C ./Libft
			cp ./Libft/libft.a ./libftprintf.a
			ar rcs $(NAME) $(OBJS)

all:		$(NAME)

clean:		
			make clean -C ./Libft
			$(RM) $(OBJS)

fclean:		clean
			make fclean -C ./Libft
			$(RM) $(NAME)

re:			fclean all

.PHONY: all clean fclean re
