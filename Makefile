# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: nvan-str <nvan-str@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2022/10/04 16:11:58 by nvan-str      #+#    #+#                  #
#    Updated: 2022/11/03 13:26:50 by nvan-str      ########   odam.nl          #
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
		ft_memchr.c\
		ft_memcmp.c\
		ft_memcpy.c\
		ft_memmove.c\
		ft_strnstr.c\
		ft_strlcpy.c\
		ft_calloc.c\
		ft_strrchr.c\
		ft_strdup.c\
		ft_atoi.c\
		ft_putchar_fd.c\
		ft_putstr_fd.c\
		ft_putendl_fd.c\
		ft_putnbr_fd.c\
		ft_striteri.c\
		ft_strmapi.c\
		ft_strlcat.c\
		ft_substr.c\
		ft_strjoin.c\
		ft_strtrim.c\
		ft_itoa.c\
		ft_split.c\
		
BONUS_SRC = ft_lstnew_bonus.c\
			ft_lstadd_front_bonus.c\
			ft_lstsize_bonus.c\
			ft_lstlast_bonus.c\
			ft_lstadd_back_bonus.c\

OBJ = $(SRC:.c=.o)
BONUS_OBJ = $(BONUS_SRC:.c=.o)
FLAGS = -Wall -Wextra -Werror
RM = /bin/rm -f

%.o:%.c
	@gcc -c $(FLAGS) -o $@ $^
	@echo "👾 Compiling: $^"

all : $(NAME)

$(NAME): $(OBJ)
	@ar -cr $@ $^
bonus : $(BONUS_OBJ)
	@ar -cr $(NAME) $^

clean:
	@$(RM) $(OBJ) $(BONUS_OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all
	
# gcc main.c -Wall -Werror -Wextra libft.a

.PHONY: all clean fclean re bonus
