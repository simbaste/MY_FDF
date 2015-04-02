/*
** proj_paral.c for proj_paral.c in /home/simomb_s/semestre1/rendu/MUL_2014_fdf
**
** Made by stephanedarcy simomba
** Login   <simomb_s@epitech.net>
**
** Started on  Thu Dec  4 10:03:44 2014 stephanedarcy simomba
** Last update Sun Dec  7 16:49:16 2014 stephanedarcy simomba
*/

#include "mlx.h"
#include "t_coord.h"

int     proj_iso(int X, int Y, int Z, t_coord_2D **point)
{
  X = X * 30;
  Y = Y * 30;
  Z = Z * 0.5;
  (*point)->x = (0.7 * X) - (0.8 * Y) + 600;
  (*point)->y = Z + (0.7 / 2) * X + (0.8 / 2) * Y + 100;
  return (0);
}
