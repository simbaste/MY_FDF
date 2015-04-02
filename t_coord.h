/*
** t_cord.h for t_cord.h in /home/simomb_s/semestre1/tests_maison/Igraph
**
** Made by stephanedarcy simomba
** Login   <simomb_s@epitech.net>
**
** Started on  Wed Dec  3 10:06:52 2014 stephanedarcy simomba
** Last update Sun Dec  7 16:49:58 2014 stephanedarcy simomba
*/

#ifndef __T_COORD_H__
# define __T_COORD_H__

typedef struct	s_coord_2D
{
  int		x;
  int		y;
}		t_coord_2D;

typedef struct	s_param
{
  void		*mlx_ptr;
  void		*win_ptr;
  void		*img;
}		t_param;

typedef struct	s_list
{
  int		*tab;
  struct s_list	*next;
}		t_list;

int		my_put_in_list(t_list **list, int *tabb);
int		my_show_list(t_list *list, int n);
int		my_list_size(t_list *begin);
int		draw_cas_un(t_coord_2D *point_1, t_coord_2D *point_2, void *img);
int		draw_cas_deux(t_coord_2D *point_1, t_coord_2D *point_2, void *img);
int		draw_cas_trois(t_coord_2D *point_1, t_coord_2D *point_2, void *img);
int		draw_cas_quatre(t_coord_2D *point_1, t_coord_2D *point_2, void *img);
int		proj_iso(int X, int Y, int Z, t_coord_2D **pt);
int		draw_line(t_coord_2D *pt_1, t_coord_2D *pt_2, void *img);
int		mlx_pixel_put_to_image(void *img, int x, int y);
void		gere_coord(t_list *list, int n, void *img);

# define ABS(x) (((x) < 0) ? ((x) * -1) : (x))

#endif /* __T_COORD_H__ */
