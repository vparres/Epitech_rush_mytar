/*
** archive.c for my_archive in /home/tails/Perso/Git/CPE_2016_b2rush1/src
**
** Made by Miles PROWER
** Login   <tails@epitech.net>
**
** Started on  Fri Mar  3 21:42:28 2017 Miles PROWER
** Last update Sun Mar  5 16:27:12 2017 Miles PROWER
*/

#include "archive/archive.h"
#include <unistd.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
  int	c;
  int	fd_arch;

  if (argc == 1 || argc == 2)
    return (84);
  else
    {
      verbose = 0;
      while ((c = getopt(argc, argv, "v")) != -1)
	{
	  if (c == 'v')
	    verbose = 1;
	  if (c == '?')
	    return (84);
	}

      printf("Verbose mode : %i\nOptind: %i\n", verbose, optind);
      fd_arch = create_archive(argv[2]);
      close_archive(fd_arch);
      return (0);
    }
}
