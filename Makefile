NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SOURCE = \
		ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
		ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c \
		ft_putnbr_fd.c ft_putstr_fd.c ft_strchr.c ft_strdup.c ft_striteri.c \
		ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strnstr.c ft_strrchr.c \
		ft_substr.c ft_tolower.c ft_toupper.c ft_itoa.c ft_strncmp.c ft_putendl_fd.c ft_split.c ft_strtrim.c
OBJECT = $(SOURCE:.c=.o)

BONUS_SOURCE = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c \
				ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c \
				ft_lstiter_bonus.c ft_lstmap_bonus.c

BONUS_OBJ = $(BONUS_SOURCE:.c=.o)

AR = ar
ARFLAGS = -rcs

INCLUDE = libft.h

RM = rm -f

all : $(NAME)

$(NAME) : $(OBJECT)
	$(AR) $(ARFLAGS) $(NAME) $(OBJECT)

%.o : %.c $(INCLUDE)
	$(CC) $(CFLAGS) -c $< -o $@

bonus : $(BONUS_OBJ)
	$(AR) $(ARFLAGS)  $(NAME) $(BONUS_OBJ)

%.o : %.c $(INCLUDE)
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	$(RM) $(OBJECT) $(BONUS_OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all  bonus clean fclean re
