/*
** main.c for random in /home/thormster/Dev/random
** 
** Made by thormster
** Login   <thormster@localhost>
** 
** Started on  Sun Jan 12 18:20:33 2020 thormster
** Last update Mon Jan 20 15:51:33 2020 thormster
*/

#include	"header.h"

int		quit_prog(char *pass)
{
  if (pass)
    free(pass);
  else
    return (ERR);
  return (0);
}

int		check_length(int ac, char **av)
{
  int		ret;
  int		i;

  i = 0;
  ret = 8;
  if (ac == 3)
  {
    while (av[2][i] != '\0')
    {
      if (av[2][i] < '0' || av[2][i] > '9')
	return (ERR);
      i += 1;
    }
    ret = atoi(av[2]);
    return (ret);
  }
  return (ret);
}

int		display_password(char *pass)
{
  if (pass != NULL)
    xputstr(pass);
  else
    return (ERR);
  return (0);
}

int		main(int ac, char **av)
{
  char		*pass;
  int		length;

  if (ac == 2 || ac == 3)
  {
    if ((length = check_length(ac, av)) == ERR)
      return (ERR);
    if ((strncmp(av[1], "-h", 2) == 0) || ((strncmp(av[1], "-h", 3) == 0)))
      return (xhelp());
    else if ((strncmp(av[1], "password", 8)) == 0)
      pass = random_generator(length);
    else if ((strncmp(av[1], "number", 6)) == 0)
      pass = random_generator(length);
    display_password(pass);
    return (quit_prog(pass));
  }
  else
    return (xhelp());
  return (0);
}
