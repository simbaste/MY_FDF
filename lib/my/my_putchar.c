/*
** my_putchar.c for my_putchar.c in /home/simomb_s/Piscine_C_J07
**
** Made by stephanedarcy simomba
** Login   <simomb_s@epitech.net>
**
** Started on  Wed Oct  8 10:21:53 2014 stephanedarcy simomba
** Last update Mon Nov 10 15:46:56 2014 stephanedarcy simomba
*/

#include <unistd.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}
