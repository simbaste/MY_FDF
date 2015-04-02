/*
** my_put_in_list.c for Bistromatique in /home/simomb_s/semestre1/rendu/projet_Bistro/block_note
**
** Made by stephanedarcy simomba
** Login   <simomb_s@epitech.net>
**
** Started on  Thu Nov  6 11:12:32 2014 stephanedarcy simomba
** Last update Fri Dec  5 22:57:11 2014 stephanedarcy simomba
*/

#include <stdlib.h>
#include "my.h"
#include "t_coord.h"

int		my_put_in_list(t_list **list, int *tabb)
{
  t_list	*tmp;
  t_list	*elem;

  tmp = *list;
  elem = NULL;
  elem = malloc(sizeof(*elem));
  if (elem == NULL)
    return (-1);
  elem->tab = tabb;
  elem->next = NULL;
  if (tmp == NULL)
    {
      *list = elem;
      return (0);
    }
  while (tmp->next != NULL)
    tmp = tmp->next;
  tmp->next = elem;
  return (0);
}

int		my_show_list(t_list *list, int n)
{
  int		i;
  t_list	*tmp;

  i = 0;
  tmp = list;
  while (tmp != NULL)
    {
      while (i < n)
	{
	  my_putchar('[');
	  my_put_nbr(tmp->tab[i]);
	  my_putchar(']');
	  i = i + 1;
	}
      i = 0;
      my_putchar('\n');
      tmp = tmp->next;
    }
  return (0);
}

int		my_list_size(t_list *begin)
{
  int		i;

  i = 0;
  while (begin != NULL)
    {
      begin = begin->next;
      i = i + 1;
    }
  return (i);
}
