NAME	= so_long

LIBS	= MLX42/build/libmlx42.a -ldl -lglfw -pthread -lm

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
			map/parsing2.c	\
			animation/background.c \
			animation/player.c \
			animation/walls.c \
			animation/collectible.c	\
			animation/exit.c \
			animation/ennemies.c \
			animation/set_score.c \
			animation/aff_digit.c \
			animation/anim.c	\
			animation/player_death.c \
			animation/player_w.c	\
			animation/ennemies2.c  \
			animation/set_score2.c \
			animation/player_w2.c \
			animation/collectible2.c \
			open_window.c \
			free_things.c	\
			free_things2.c	\
			free_things3.c	\
			collision.c \
			spread.c	\
			move_player.c	\
			init_texture.c	\
			init_death1.c	\
			init_death2.c	\


SRCS_MAIN	= so_long.c $(SRCS)

OBJS	= $(SRCS_MAIN:.c=.o)

CC	= @gcc

CFLAGS	+= -Wall -Wextra -Werror -g3 -fsanitize=address

RM	= @rm -rf

CURRENT_DATE	:= $(shell date +"%Y-%m-%d %H:%M:%S")

all	: $(NAME)

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

git	:
	@git add . > /dev/null 2>&1
	@git commit -m "$(CURRENT_DATE)" > /dev/null 2>&1
	@git push > /dev/null 2>&1
	@echo "$(GREEN)(•̀ᴗ•́)و ̑̑GIT UPDATE!(•̀ᴗ•́)و ̑̑$(DEF_COLOR)"

norm :
	@norminette *.c *.h animation/*.c map/*.c | grep -i -E 'Error' || norminette *.c *.h animation/*.c map/*.c