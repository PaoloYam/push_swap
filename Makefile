# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pyammoun <marvin@42lausanne.ch>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/11 10:40:50 by pyammoun          #+#    #+#              #
#    Updated: 2022/04/11 21:01:29 by pyammoun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	${addprefix src/, push_swap.c operation_sp.c operation_r.c operation_rr.c solve3.c solve5.c solve.c clean.c}
OBJS        =	${SRCS:.c=.o}
NAME        =	push_swap
AR    		=	ar rcs
GCC       	=	gcc 
RM       	=	rm -f
CFLAGS    	=	-Wall -Wextra -Werror -g 
LBFT_PATH	=	./libft/
FRAMLIBS  	=    -L ${LBFT_PATH} -lft 

all:	$(NAME)

.c.o:
	$(GCC) $(CFLAGS) -Imlx -c $< -o $@

$(NAME):    $(OBJS)
			@$(MAKE) -C $(LBFT_PATH)

			$(GCC) $(OBJS) $(CFLAGS) -I ${LBFT_PATH} -o $(NAME) $(FRAMLIBS)

clean:
	${RM} ${OBJS}
	@$(MAKE) -C $(LBFT_PATH) clean

fclean:        clean
	${RM} ${NAME}
	@$(MAKE) -C $(LBFT_PATH) fclean

re:			fclean all

.PHONY:		all clean fclean re
