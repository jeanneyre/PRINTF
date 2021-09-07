NAME		=	libftprintf.a

CFLAGS		=	-Wall -Wextra -Werror -c

CC			=	gcc

SRCS        =   ft_printf.c \
				ft_printf_lib.c \
				ft_printf_lib_2.c \
				ft_printf_c.c \
				ft_printf_d.c \
				ft_printf_i.c \
				ft_printf_p.c \
				ft_printf_s.c \
				ft_printf_u.c \
				ft_printf_x.c \
				ft_printf_percent.c

OBJS        =   $(SRCS:.c=.o)

all		:	$(NAME)

$(NAME)	:	 $(OBJS)
		ar crs $@ $(OBJS)

%.o 	:	%.c
		$(CC) $(CFLAGS) $< -o $@

clean	:
		rm -rf $(OBJS)

fclean	:	clean
		rm -f $(NAME)

re		:	fclean all

#.PHONY	:	all re clean fclean bonus

