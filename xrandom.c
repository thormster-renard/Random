/*
** xrandom.c for random in /home/thormster/Dev/random
** 
** Made by thormster
** Login   <thormster@localhost>
** 
** Started on  Sun Jan 12 18:43:02 2020 thormster
** Last update Mon Jan 20 15:52:24 2020 thormster
*/

#include	"header.h"

char             xgetrand(int max, int witness)
{
  char           secret;

  secret = rand() % max + 1;
  secret += witness;
  if (secret < 33 || secret > 126)
    return ('0');
  return (secret);
}

char		*random_generator(int length)
{
  char		*pass;
  int		secret;
  char		c;
  int		i;

  i = 0;
  srand((time(NULL) ^ (getpid() * 40499)));
  if ((pass = malloc((length + 1)* sizeof(char))) == NULL)
    return (NULL);
  while (i != length)
  {
    sleep(0.9);
    secret = xgetrand(94, 33);
    c = secret;
    pass[i] = c;
    i += 1;
  }
  pass[i] = '\0';
  return (pass);
}
