/*
** draw_line.c for draw_line.c in /home/simomb_s/semestre1/rendu/MUL_2014_fdf
**
** Made by stephanedarcy simomba
** Login   <simomb_s@epitech.net>
**
** Started on  Thu Dec  4 09:54:21 2014 stephanedarcy simomba
** Last update Fri Dec  5 17:46:37 2014 stephanedarcy simomba
*/

#include <stdlib.h>
#include "mlx.h"
#include "t_coord.h"

int	draw_line(t_coord_2D *point_1, t_coord_2D *point_2, void *img)
{
  if ((point_1->x <= point_2->x) &&
      (point_2->x - point_1->x) >= (ABS(point_2->y - point_1->y)))
    draw_cas_un(point_1, point_2, img);
  else if ((point_1->x >= point_2->x) &&
	   ((ABS(point_1->x - point_2->x)) >= (ABS(point_2->y - point_1->y))))
    draw_cas_deux(point_1, point_2, img);
  else if ((point_1->y >= point_2->y) &&
	   ((ABS(point_2->x - point_1->x) <= ABS(point_2->y - point_1->y))))
    draw_cas_trois(point_1, point_2, img);
  else if ((point_1->y <= point_2->y) &&
	   (ABS(point_1->x - point_2->x) <= ABS(point_2->y - point_1->y)))
    draw_cas_quatre(point_1, point_2, img);
  return (0);
}
