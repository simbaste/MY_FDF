##
## Makefile for Makefile in /home/simomb_s/semestre1/tests_maison/TP_systeme_unix/TP1
##
## Made by stephanedarcy simomba
## Login   <simomb_s@epitech.net>
##
## Started on  Mon Nov 24 10:58:02 2014 stephanedarcy simomba
## Last update Sun Dec  7 16:45:26 2014 stephanedarcy simomba
##

SRC	= main.c\
	  my_put_in_list.c\
	  my_str_to_nbr_tab.c\
	  epur_str.c\
	  get_next_line.c\
	  my_draw.c\
	  draw_line.c\
	  proj_iso.c\
	  mlx_pixel_put_to_image.c\
	  gere_coord.c

OBJ	= $(SRC:.c=.o)

CFLAGS	+= -W -Wall -Wextra -g3
CFLAGS	+=
LDFLAGS	+=

NAME	= fdf

all	: $(LIB) CMP_LIB $(NAME)

CMP_LIB	:
	cd lib/my && make

$(NAME)	: $(OBJ)
	cc -o $(NAME) $(OBJ) -lmy -L lib -L /usr/lib64 -lmlx -L /usr/lib64/X11 -lXext -lX11

clean	:
	rm -rf $(OBJ)
	cd lib/my && make clean

fclean	: clean
	rm -rf $(NAME)

re	: fclean all

.PHONY	:
	all clean fclean re
