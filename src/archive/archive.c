/*
** archive.c for my_archive in /home/tails/Perso/Git/CPE_2016_b2rush1/src
**
** Made by Miles PROWER
** Login   <tails@epitech.net>
**
** Started on  Fri Mar  3 21:42:28 2017 Miles PROWER
** Last update Sat Mar  4 15:05:08 2017 Miles PROWER
*/

#include "archive/archive.h"

int	main(int argc, char **argv)
{
  int	c;

  verbose = 0;
  while ((c = getopt(argc, argv, "v")) != -1)
    {
      if (c == 'v')
	verbose = 1;
      if (c == '?')
	return (84);
    }

  printf("Verbose mode : %i\nOptind: %i\n", verbose, optind);

  return (0);
}
