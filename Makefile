# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ycarro <ycarro@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/13 11:19:27 by ycarro            #+#    #+#              #
#    Updated: 2021/09/15 10:00:26 by ycarro           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libftprintf.a
HEADERFILES := include/ft_printf.h
SRCFILES := ft_print_hex.c \
			ft_print_ptr.c \
			ft_print_uns.c \
			ft_printf.c \
			ft_putchar_mod.c \
			ft_putnbr_mod.c \
			ft_putstr_mod.c

OBJFILES := $(SRCFILES:%.c=obj/%.o)

LIBA := libft/libft.a

CFLAGS ?= -Wall -Wextra -Werror
LDFLAGS ?= -c

all: mklib $(NAME)

mklib:
	make -C $(dir $(LIBA))

$(NAME): $(OBJFILES) $(LIBA)
	cp $(LIBA) $@
	ar rc $@ $(OBJFILES)

obj/%.o: src/%.c  $(HEADERFILES)
	@mkdir -p $(dir $@)
	$(CC) $(LDFLAGS) $(CFLAGS) -o $@ $<

clean:
	rm -f $(OBJFILES)
	make clean -C $(dir $(LIBA))

fclean: clean
	rm -f $(NAME)
	make fclean -C $(dir $(LIBA))

re: fclean all

.PHONY = all clean fclean re
