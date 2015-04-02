/*
** gere_coord.c for  in /home/simomb_s/semestre1/rendu/MUL_2014_fdf
**
** Made by stephanedarcy simomba
** Login   <simomb_s@epitech.net>
**
** Started on  Fri Dec  5 09:29:51 2014 stephanedarcy simomba
** Last update Sun Dec  7 18:43:58 2014 stephanedarcy simomba
*/

#include <stdlib.h>
#include <stdio.h>
#include "mlx.h"
#include "t_coord.h"
#include "my.h"

int		aff_line_1(t_list *list, void *img, int i, int j)
{
  t_coord_2D	*pt_1;
  t_coord_2D	*pt_2;

  if ((pt_1 = malloc(sizeof(t_coord_2D))) == NULL
      || (pt_2 = malloc(sizeof(t_coord_2D))) == NULL)
    exit(0);
  proj_iso(i, j, list->tab[i], &pt_1);
  proj_iso((i + 1), j, list->tab[i + 1], &pt_2);
  draw_line(pt_1, pt_2, img);
  i = i + 1;
  return (i);
}

int		aff_line_2(t_list *list, void *img, int i, int j)
{
  t_coord_2D	*pt_1;
  t_coord_2D	*pt_2;

  if ((pt_1 = malloc(sizeof(t_coord_2D))) == NULL
      || (pt_2 = malloc(sizeof(t_coord_2D))) == NULL)
    exit(0);
  proj_iso(i, j, list->tab[i], &pt_1);
  proj_iso(i, (j + 1), list->next->tab[i], &pt_2);
  draw_line(pt_1, pt_2, img);
  i = i + 1;
  return (i);
}

int		aff_line_3(t_list *list, void *img, int i, int j)
{
  t_coord_2D	*pt_1;
  t_coord_2D	*pt_2;

  if ((pt_1 = malloc(sizeof(t_coord_2D))) == NULL
      || (pt_2 = malloc(sizeof(t_coord_2D))) == NULL)
    exit(0);
  proj_iso(i, j, list->tab[i], &pt_1);
  proj_iso(i, (j + 1), list->next->tab[i], &pt_2);
  draw_line(pt_1, pt_2, img);
  i = i + 1;
  return (i);
}

int		aff_line(t_list *list, void *img, int i, int j)
{
  aff_line_1(list, img, i, j);
  i = aff_line_2(list, img, i, j);
  return (i);
}

void             gere_coord(t_list *list, int n, void *img)
{
  static  int	i;
  static  int	j;

  while (list != NULL)
    {
      while (i < n)
	{
	  if (list->next == NULL)
	    {
	      if (i + 1 == n)
		i = i + 1;
	      else
		i = aff_line_1(list, img, i, j);
	    }
	  else if (i + 1 < n)
	    i = aff_line(list, img, i, j);
	  else
	    i = aff_line_3(list, img, i, j);
	  if (i > 150)
	    exit(0);
	}
      i = 0;
      j = j + 1;
      list = list->next;
    }
}
