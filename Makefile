NAME	= so_long

LIBMLX	= ./MLX42

LIBS	= $(LIBMLX)/build/libmlx42.a -ldl -lglfw -pthread -lm

DEF_COLOR = \033[0;39m
GRAY = \033[0;90m
RED = \033[0;91m
GREEN = \033[0;92m
YELLOW = \033[0;93m
BLUE = \033[0;94m
MAGENTA = \033[0;95m
CYAN = \033[0;96m
WHITE = \033[0;97m

SRCS	= 	map/parsing.c \
			map/parsing_map.c \
			spread.c	\
			open_window.c \
			animation/background.c \
			animation/player.c \
			animation/walls.c \
			free_things.c	\
			hidden_map.c	\
			check_collision.c

SRCS_MAIN	= so_long.c $(SRCS)

OBJS	= $(SRCS_MAIN:.c=.o)

CC	= @gcc

CFLAGS	+= -Wall -Wextra -Werror -g3 #-fsanitize=address

RM	= @rm -rf

all	: libmlx $(NAME)

libmlx :
	@cmake $(LIBMLX) -B $(LIBMLX)/build && make -C $(LIBMLX)/build -j4

bonus	: $(NAME_BONUS)

$(NAME) : $(OBJS)
	@make --no-print-directory -C Libft
	$(CC) $(CFLAGS)  $(OBJS) Libft/libft.a $(LIBS) -o $(NAME)
	@echo "$(MAGENTA)Make Done$(DEF_COLOR)"

$(NAME_BONUS) : $(OBJS_BONUS)
	@make --no-print-directory -C Libft
	$(CC) $(CFLAGS) $(OBJS_BONUS) Libft/libft.a -o $(NAME_BONUS)
	@echo "$(YELLOW)Make Bonus Done$(DEF_COLOR)"

clean : 
	$(RM) $(OBJS) 
	@make --no-print-directory -C Libft clean
	@rm -rf $(LIBMLX)/build
	@echo "$(BLUE)OBJS CLEAR MY FRIEND!$(DEF_COLOR)"

fclean : 
	$(RM) $(NAME) $(OBJS)
	@make --no-print-directory -C Libft fclean
	@echo "$(MAGENTA)¯|_(ツ)_/¯ I'M SO PROUD OF U!$(DEF_COLOR)"


re :	fclean all

ex :	re clean
	@echo "$(GREEN)(•̀ᴗ•́)و ̑̑ALL FINE!(•̀ᴗ•́)و ̑̑$(DEF_COLOR)"