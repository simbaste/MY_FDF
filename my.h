/*
** my.h for my.h in /home/simomb_s/Piscine_C_J09/include
**
** Made by stephanedarcy simomba
** Login   <simomb_s@epitech.net>
**
** Started on  Thu Oct  9 15:26:53 2014 stephanedarcy simomba
** Last update Thu Dec  4 16:41:49 2014 stephanedarcy simomba
*/

#ifndef __FDF_H__
#define __FDF_H__

void	my_putchar(char);
int	my_isneg(int);
int	my_put_nbr(int);
int	my_swap(int*, int*);
int	my_putstr(char*);
int	my_strlen(char*);
int	my_getnbr(char*);
void	my_sort_int_tab(int*, int);
int	my_power_rec(int, int);
int	my_quare_root(int);
int	my_is_prime(int);
int	my_find_prime_sup(int);
char	*my_strcpy(char*, char*);
char	*my_strncpy(char*, char*, int);
char	*my_revstr(char*);
char	*my_strstr(char*, char*);
int	my_strcmp(char*, char*);
int	my_strncmp(char*, char*, int);
char	*my_strupcase(char*);
char	*my_strlowcase(char*);
char	*my_strcapitalize(char*);
int	my_str_isalpha(char*);
int	my_str_isnum(char*);
int	my_str_islower(char*);
int	my_str_isupper(char*);
int	my_str_isprintable(char*);
int	my_showstr(char*);
int	my_showmem(char*, int);
char	*my_strcat(char*, char*);
char	*my_strncat(char*, char*, int);
int	my_strlcat(char*, char*, int);
int	count_token(char *str);
int	*my_str_to_nbr_tab(char *str);
char	*epur_str(char *str);

#endif /* __FDF_H__ */
