/*
** epur_str.c for epur_str.c in /home/simomb_s/semestre1/rendu/MUL_2014_fdf
**
** Made by stephanedarcy simomba
** Login   <simomb_s@epitech.net>
**
** Started on  Wed Dec  3 17:14:12 2014 stephanedarcy simomba
** Last update Sun Dec  7 16:43:23 2014 stephanedarcy simomba
*/

#include <stdlib.h>
#include <stdio.h>
#include "my.h"

char	*epur_str(char *str)
{
  char	*src;
  int	i;
  int	j;

  i = 0;
  j = 0;
  if ((src = malloc(sizeof(char *) * my_strlen(str))) == NULL)
    return (NULL);
  while (str[i] != '\0')
    {
      if (str[i] < '0' || str[i] > '9')
	{
	  while ((str[i] < '0' || str[i] > '9') && str[i] != '\0')
	    i = i + 1;
	  if (j > 0 && str[i] != '\0')
	    src[j++] = ' ';
	}
      src[j] = str[i];
      j = j + 1;
      i = i + 1;
    }
  src[j] = '\0';
  return (src);
}
