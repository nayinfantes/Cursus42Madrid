# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ninfante <ninfante@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/11 15:34:52 by ninfante          #+#    #+#              #
#    Updated: 2023/03/14 18:33:41 by ninfante         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIB = ar rcs
RM = rm -f
NAME = libft.a
MY_SOURCES = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_toupper.c ft_tolower.c \
			ft_isascii.c ft_isprint.c ft_strlen.c ft_atoi.c ft_memset.c\
			ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c\
			ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c\
			ft_strnstr.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c\
			ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c\
			ft_putendl_fd.c ft_putnbr_fd.c ft_strtrim.c ft_split.c ft_itoa.c
MY_OBJECTS = $(MY_SOURCES:.c=.o)
INCLUDE = libft.h
CFLAGS += -Wall -Wextra -Werror
MY_BONUS_SOURCES = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
				ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c \
				ft_lstiter_bonus.c ft_lstmap_bonus.c
MY_BONUS_OBJECTS = $(MY_BONUS_SOURCES:.c=.o)
$(NAME): $(MY_OBJECTS) libft.h
			$(LIB) $(NAME) $(MY_OBJECTS)
%.o: %.c
	gcc $(CFLAGS) -c -o $@ $<
all: $(NAME)
bonus: $(MY_OBJECTS) $(MY_BONUS_OBJECTS)
		$(LIB) $(NAME) $(MY_BONUS_OBJECTS) $(MY_OBJECTS)
clean:
		$(RM) $(MY_OBJECTS) $(MY_BONUS_OBJECTS)

fclean: clean
		$(RM) $(NAME)

re: fclean all
rebonus: fclean bonus
.PHONY: all bonus clean fclean re rebonus
