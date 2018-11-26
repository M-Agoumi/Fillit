# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: magoumi <agoumihunter@gmail.com>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/04 22:41:07 by magoumi           #+#    #+#              #
#    Updated: 2018/11/20 22:59:04 by ohachim          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =  fillit.c ft_isvalid.c  main.c gride.c open.c ft_opend.c ft_tetr.c ft_ispossible.c ft_place.c ft_placenreplace.c ft_reset.c libft.a 
NAME = fillit
all: $(NAME)
$(NAME):
	gcc -c -Werror -Wextra -Wall libft/*.c 
	ar rc libft.a *.o
	ranlib libft.a
	gcc $(SRC) -Werror -Wall -Wextra -o $(NAME)
clean :
	rm -f  *.o
fclean : clean
	rm -rf $(NAME) libft.a
re : fclean all
