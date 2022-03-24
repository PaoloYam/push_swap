# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pyammoun <marvin@42lausanne.ch>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/11 10:40:50 by pyammoun          #+#    #+#              #
#    Updated: 2021/11/24 09:51:04 by pyammoun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_isalpha.c \
	   ft_isdigit.c \
	   ft_isalnum.c \
	   ft_isascii.c \
	   ft_isprint.c \
	   ft_strlen.c \
	   ft_memset.c \
	   ft_bzero.c \
	   ft_memcpy.c \
	   ft_memmove.c \
	   ft_strlcpy.c \
	   ft_strlcat.c \
	   ft_toupper.c \
	   ft_tolower.c \
	   ft_strchr.c \
	   ft_strrchr.c \
	   ft_strncmp.c \
	   ft_memchr.c \
	   ft_memcmp.c \
	   ft_strnstr.c \
	   ft_atoi.c \
	   ft_calloc.c \
	   ft_strdup.c \
	   ft_substr.c \
	   ft_strjoin.c \
	   ft_strtrim.c \
	   ft_split.c \
	   ft_itoa.c \
	   ft_strmapi.c \
	   ft_striteri.c \
	   ft_putchar_fd.c \
	   ft_putstr_fd.c \
	   ft_putendl_fd.c \
	   ft_putnbr_fd.c

SRCS_BONUS  = ft_lstnew.c \
			  ft_lstadd_front.c \
			  ft_lstsize.c \
			  ft_lstlast.c \
			  ft_lstadd_back.c \
			  ft_lstdelone.c \
			  ft_lstclear.c \
			  ft_lstiter.c \
			  ft_lstmap.c \
			  ft_lstmap.c

OBJS= ${SRCS:.c=.o}

OBJS_BONUS = $(SRCS_BONUS:.c=.o)

CFLAGS= -Wall -Werror -Wextra
NAME = libft.a

all: $(NAME)

.c.o:
	@echo Compiling $<
	gcc -c $(CFLAGS) $< -o ${<:.c=.o}

$(NAME): $(OBJS)
	@echo make $(NAME)
	ar -rcs $(NAME) $(OBJS) 

bonus: $(OBJS_BONUS)
	@echo make $(NAME)
	ar -rcs $(NAME) $(OBJS_BONUS)

re:	fclean $(NAME)

clean:
	@echo Cleaning out those old .o
	@rm -f $(OBJS) $(OBJS_BONUS)

fclean: clean
	@echo Cleaning out that old $(NAME)
	@rm -f $(NAME)

out:
	gcc $(CFLAGS) $(SRCS)

cleanout:
	rm a.out

.PHONY:        all bonus clean fclean re out cleanout

