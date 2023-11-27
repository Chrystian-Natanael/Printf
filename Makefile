# ! --------------------------------------------------------------------------------------------------------------------------------
# ! NAME

NAME := libftprintf.a
.PHONY:	all clean fclean re bonus
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

SRCS_PATH = source
OBJS_PATH = obj
INCS_PATH = include/
LIBFT_PATH = libft/
LIBFT = libft.a

# ! --------------------------------------------------------------------------------------------------------------------------------
# ! COMMANDS AND FLAGS

SHELL := /bin/bash
MKDIR := mkdir -p
CC = cc
AR := ar -rcs
RM := rm -rf
SLEEP = sleep 0.1
CFLAGS = -Wall -Wextra -Werror -g3 -Ofast

# ! --------------------------------------------------------------------------------------------------------------------------------
# ! FILES

SRCS = ft_printf.c

OBJS = $(patsubst %, $(OBJS_PATH)/%, $(notdir $(SRCS:.c=.o)))

# ! --------------------------------------------------------------------------------------------------------------------------------
# ! RULES
all: $(LIBFT) $(NAME)

$(LIBFT):
	@$(MAKE) -sC $(LIBFT_PATH)

folder:
	@$(MKDIR) $(OBJS_PATH)

$(OBJS_PATH)/%.o: $(SRCS_PATH)/%.c
	@$(SLEEP)
	@$(CC) $(CFLAGS) -I $(INCS_PATH) -I $(LIBFT_PATH)include -c $< -o $@
	@printf "$(YELLOW)Compiling:$(FCOLOR) $(PURPLE)$<$(FCOLOR)\n"

$(NAME): folder $(OBJS)
	@$(AR) $@ $(OBJS) $(LIBFT_PATH)obj/*.o
	@$(SLEEP)
	@printf "$(GREEN)Compiled:$(FCOLOR) $(PURPLE)$@$(FCOLOR)\n"

clean:
	@$(MAKE) -sC $(LIBFT_PATH) clean
	@$(RM) $(OBJS_PATH)

fclean: clean
	@$(MAKE) -C $(LIBFT_PATH) fclean
	@$(RM) $(NAME)

re: fclean all

bonus: