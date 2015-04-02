/*
** my_pixel_put_to_image.c for  in /home/simomb_s/semestre1/rendu/MUL_2014_fdf
**
** Made by stephanedarcy simomba
** Login   <simomb_s@epitech.net>
**
** Started on  Thu Dec  4 16:17:06 2014 stephanedarcy simomba
** Last update Fri Dec  5 21:10:15 2014 stephanedarcy simomba
*/

#include "mlx.h"

int	mlx_pixel_put_to_image(void *img, int x, int y)
{
  char	*data;
  int	bpp;
  int	endian;
  int	sizeline;
  int	i;

  i = 0;
  data = mlx_get_data_addr(img, &bpp, &sizeline, &endian);
  while (i != bpp / 8)
    {
      data[(y * sizeline) + (x * (bpp / 8)) + i++] = 255;
      data[(y * sizeline) + (x * (bpp / 8)) + i++] = 100;
      data[(y * sizeline) + (x * (bpp / 8)) + i++] = 105;
      data[(y * sizeline) + (x * (bpp / 8)) + i++] = 0;
    }
  return (0);
}
