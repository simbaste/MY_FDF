/*
** my_str_to_wordtab.c for my_str_to_wordtab.c in /home/simomb_s/projet_Bistro
**
** Made by stephanedarcy simomba
** Login   <simomb_s@epitech.net>
**
** Started on  Tue Oct 28 15:11:14 2014 stephanedarcy simomba
** Last update Sun Dec  7 17:44:01 2014 stephanedarcy simomba
*/

#include <stdio.h>
#include <stdlib.h>
#include "my.h"

int	count_token(char *str)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while (str[i] != '\0')
    {
      if (str[i] == ' ')
	j = j + 1;
      i = i + 1;
    }
  return (j + 1);
}

int	*my_str_to_nbr_tab(char *str)
{
  int	i;
  int	j;
  int	n;
  int	*tab;

  i = 1;
  j = 1;
  n = count_token(str);
  if ((tab = malloc(n * sizeof(*tab))) == NULL)
    exit(0);
  if ((tab[0] = my_getnbr(str)) > 1000)
    exit(0);
  while (str[i] != '\0')
    {
      if (str[i - 1] == ' ')
	{
	  if ((tab[j] = my_getnbr(&str[i])) > 1000)
	    exit(0);
	  j = j + 1;
	}
      i = i + 1;
    }
  return (tab);
}
