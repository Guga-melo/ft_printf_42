NAME	= libftprint.a

SRCS	= ft_printf.c ft_strchr.c ft_putchar_fd.c ft_putstr_fd.c

OBJS	= $(SRCS:.c=.o)

.c.o:
			cc $(CFLAGS) -c $< -o $(<:.c=.o)

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
