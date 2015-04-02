/*
** my_draw.c for my_draw.c in /home/simomb_s/semestre1/rendu/MUL_2014_fdf
**
** Made by stephanedarcy simomba
** Login   <simomb_s@epitech.net>
**
** Started on  Thu Dec  4 09:39:20 2014 stephanedarcy simomba
** Last update Fri Dec  5 22:59:24 2014 stephanedarcy simomba
*/

#include <stdio.h>
#include <stdlib.h>
#include "mlx.h"
#include "t_coord.h"

int	draw_cas_un(t_coord_2D *point_1, t_coord_2D *point_2, void *img)
{
  int	x;
  x = point_1->x;
  while (x <= point_2->x)
    {
      mlx_pixel_put_to_image(img, x, point_1->y
		    + ((point_2->y - point_1->y) * (x - point_1->x))
		    / (point_2->x - point_1->x));
      x = x + 1;
    }
  return (0);
}

int	draw_cas_deux(t_coord_2D *point_1, t_coord_2D *point_2, void *img)
{
  int	x;

  x = point_1->x;
  while (x >= point_2->x)
    {
      mlx_pixel_put_to_image(img, x, point_1->y
		    + ((point_2->y - point_1->y) * (x - point_1->x))
		    / (point_2->x - point_1->x));
      x = x - 1;
    }
  return (0);
}

int	draw_cas_trois(t_coord_2D *point_1, t_coord_2D *point_2, void *img)
{
  int	y;

  y = point_1->y;
  while (y >= point_2->y)
    {
      mlx_pixel_put_to_image(img, point_1->x
		    + ((point_2->x - point_1->x) * (y - point_1->y))
		    / (point_2->y - point_1->y), y);
      y = y - 1;
    }
  return (0);
}

int	draw_cas_quatre(t_coord_2D *point_1, t_coord_2D *point_2, void *img)
{
  int	y;

  y = point_1->y;
  while (y <= point_2->y)
    {
      mlx_pixel_put_to_image(img, point_1->x
		    +((point_2->x - point_1->x) * (y - point_1->y))
		    / (point_2->y - point_1->y), y);
      y = y + 1;
    }
  return (0);
}
