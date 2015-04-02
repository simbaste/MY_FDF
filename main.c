/*
** main.c for main.c in /home/simomb_s/semestre1/rendu/MUL_2014_fdf/CPE_2014_get_next_line/CPE_2014_get_next_line
**
** Made by stephanedarcy simomba
** Login   <simomb_s@epitech.net>
**
** Started on  Wed Dec  3 14:55:26 2014 stephanedarcy simomba
** Last update Sun Dec  7 19:25:59 2014 stephanedarcy simomba
*/

#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <stdio.h>
#include "mlx.h"
#include "get_next_line.h"
#include "my.h"
#include "t_coord.h"

int		my_coord_in_list(t_list **list, int fd)
{
  int		n;
  int		nb;
  int		*tab;
  char		*s;

  n = 0;
  while ((s = get_next_line(fd)))
    {
      if ((s = epur_str(s)) == 0)
	exit(0);
      nb = count_token(s);
      if ((nb != n && n != 0) || my_strlen(s) <= 2)
	{
	  my_putstr("Incorect format of line!!!\n");
	  exit(-1);
	}
      n = nb;
      tab = my_str_to_nbr_tab(s);
      my_put_in_list(list, tab);
      free(s);
    }
  return (n);
}

int		gere_key(int keycode)
{
  my_put_nbr(keycode);
  if (keycode == 65307)
    exit(1);
  return (0);
}

int		gere_expose(t_param *mlx)
{
  mlx_put_image_to_window(mlx->mlx_ptr, mlx->win_ptr, mlx->img, 0, 0);
  return (0);
}

int		main(int ac, char **av)
{
  int		fd;
  int		n;
  t_param	*mlx;
  t_list	*list;

  if (ac == 2)
    {
      if ((fd = open(av[1], O_RDONLY)) == -1)
	exit(0);
      if ((mlx = malloc(sizeof(t_param))) == NULL)
	return (-1);
      if ((mlx->mlx_ptr = mlx_init()) == 0)
	exit(0);
      mlx->win_ptr = mlx_new_window(mlx->mlx_ptr, 1700, 1700, "F_D_F");
      list = NULL;
      n = my_coord_in_list(&list, fd);
      mlx->img = mlx_new_image(mlx->mlx_ptr, 1700, 1700);
      gere_coord(list, n, mlx->img);
      mlx_put_image_to_window(mlx->mlx_ptr, mlx->win_ptr, mlx->img, 0, 0);
      mlx_expose_hook(mlx->win_ptr, gere_expose, mlx);
      mlx_key_hook(mlx->win_ptr, gere_key, 0);
      mlx_loop(mlx->mlx_ptr);
      free(mlx);
    }
  return (0);
}
