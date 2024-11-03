# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: klandave <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/01 20:41:23 by klandave          #+#    #+#              #
#    Updated: 2024/10/01 20:41:38 by klandave         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
CC = cc

NAME = ft_display_file

CFLAGS = -Wall -Wextra -Werror -Iincludes/

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) main.c -o $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
