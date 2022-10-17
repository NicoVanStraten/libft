# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: nvan-str <nvan-str@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2022/10/04 16:11:58 by nvan-str      #+#    #+#                  #
#    Updated: 2022/10/17 13:05:18 by nvan-str      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC =	ft_isalnum.c\
		ft_isalpha.c\
		ft_isdigit.c\
		ft_isprint.c\
		ft_isascii.c\
		ft_bzero.c\
		ft_memset.c\
		ft_toupper.c\
		ft_tolower.c\
		ft_strchr.c\
		ft_strlen.c\
		ft_strncmp.c\
		# ft_memchr.c\
		# ft_memcmp.c\
		# ft_memcpy.c\
		# ft_memmove.c\
		# ft_strnstr.c\
		# ft_strlcpy.c\

OBJ = $(SRC:.c=.o)
FLAGS = -Wall -Wextra -Werror
RM = /bin/rm -f

%.o:%.c
	@gcc -c $(FLAGS) -o $@ $^
	@echo "🧬 Compiling: $^"

all : $(NAME)

$(NAME): $(OBJ)
	@ar -cr $@ $^

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all
	
# gcc main.c -Wall -Werror -Wextra libft.a

.PHONY: all clean fclean re
