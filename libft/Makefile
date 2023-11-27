# ! --------------------------------------------------------------------------------------------------------------------------------
# ! NAME

NAME := libft.a
.PHONY:	all clean fclean re
.DEFAULT_GOAL := all

# ! --------------------------------------------------------------------------------------------------------------------------------
# ! COLORS

GREEN = \033[32m
YELLOW = \033[33m
PURPLE = \033[35m
RED = \033[31m
WHITE = \033[37m
FCOLOR = \033[0m

# ! --------------------------------------------------------------------------------------------------------------------------------
# ! PATH

PATHSRC = source
PATHOBJ = obj
PATCHINLCUDE = include/

# ! --------------------------------------------------------------------------------------------------------------------------------
# ! COMMANDS

SHELL := /bin/bash
MKDIR := mkdir -p
CC := cc
AR := ar -rcs
RM := rm -rf

# ! --------------------------------------------------------------------------------------------------------------------------------
# ! FILES

SRCS := ft_isalpha.c \
	ft_isdigit.c \
	ft_strlen.c \
	ft_isalnum.c \
	ft_isascii.c \
	ft_isprint.c \
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
	ft_putnbr_fd.c \
	ft_lstnew.c \
	ft_lstadd_front.c \
	ft_lstsize.c \
	ft_lstlast.c \
	ft_lstadd_back.c \
	ft_lstdelone.c \
	ft_lstclear.c \
	ft_lstiter.c \
	ft_lstmap.c \
	get_next_line.c \
	get_next_line_utils.c \
	ft_putnbr_base.c

OBJS = $(patsubst %, $(PATHOBJ)/%, $(notdir $(SRCS:.c=.o)))

CFLAGS := -Wall -Wextra -Werror -g3 -Ofast

# ! --------------------------------------------------------------------------------------------------------------------------------
# ! OTHER VARIABLES

COUNT := 0

# ! --------------------------------------------------------------------------------------------------------------------------------
# ! RULES 

all: $(PATHOBJ) $(NAME)

$(PATHOBJ):
	@$(MKDIR) $@

$(PATHOBJ)/%.o: $(PATHSRC)/%.c 
	@$(eval COUNT=$(shell expr $(COUNT) + 1))
	@$(CC) $(CFLAGS) -I$(PATCHINLCUDE) -c $< -o $@
	@printf "Compiling $(YELLOW)LIBFT %d%%\r$(FCOLOR)" $$(echo $$(($(COUNT) * 100 / $(words $(SRCS)))))

$(NAME): $(OBJS)
	@sleep 0.01
	@printf "$(GREEN)[COMPILED] - OK $(FCOLOR)\n"

clean:
	@$(RM) $(PATHOBJ)

fclean:	clean
	@$(RM) $(PATHOBJ)
	@$(RM) $(NAME)

re:	fclean all

