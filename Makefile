# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: nvan-str <nvan-str@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2022/10/04 16:11:58 by nvan-str      #+#    #+#                  #
#    Updated: 2022/10/14 14:53:16 by nvan-str      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC =	ft_isalnum.o\
		ft_isalpha.o\
		ft_isdigit.o\
		ft_isprint.o\
		# ft_isascii.o\
		# ft_bzero.o\
		# ft_memset.o\
		# ft_strchr.o\
		# ft_strlen.o\
		# ft_strncmp.o\
		# ft_tolower.o\
		# ft_toupper.o\
		# ft_memchr.o\
		# ft_memcmp.o\
		# ft_memcpy.o\
		# ft_memmove.o\
		# ft_strnstr.o\
		# ft_strlcpy.o\

FLAGS = -Wall -Wextra -Werror
RM = /bin/rm -f

%.o:%.c
	@gcc -c $(FLAGS) -o $@ $^
	@echo "🧬 Compiling: $^"

all : $(NAME)

$(NAME): $(SRC)
	@ar -cr $@ $^

clean:
	@$(RM) $(SRC)

fclean: clean
	@$(RM) $(NAME)

re: fclean all
	
# gcc main.c -Wall -Werror -Wextra libft.a

.PHONY: all clean fclean re
