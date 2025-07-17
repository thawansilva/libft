NAME = libft.a
SRCS = ft_isalpha.c ft_isalnum.c ft_isdigit.c ft_memset.c ft_strlcpy.c ft_toupper.c ft_bzero.c ft_atoi.c ft_isascii.c ft_isprint.c ft_strlen.c ft_tolower.c ft_memcpy.c ft_memmove.c ft_strchr.c ft_strnstr.c ft_strrchr.c ft_strncmp.c ft_strlcat.c ft_substr.c ft_strjoin.c ft_strdup.c ft_calloc.c ft_memchr.c ft_memcmp.c
TESTDIR = tests/
OBJS = $(SRCS:.c=.o)
CFLAGS = -g -Wall -Wextra -Werror
RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $@ $^ 

$(OBJS): %.o: %.c
	cc $(CFLAGS) -I . -c $^ -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all fclean clean re
