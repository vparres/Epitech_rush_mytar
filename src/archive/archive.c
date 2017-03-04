/*
** archive.c for my_archive in /home/tails/Perso/Git/CPE_2016_b2rush1/src
**
** Made by Miles PROWER
** Login   <tails@epitech.net>
**
** Started on  Fri Mar  3 21:42:28 2017 Miles PROWER
<<<<<<< HEAD
** Last update Sat Mar  4 15:05:08 2017 Miles PROWER
=======
** Last update Sat Mar  4 14:44:27 2017 Adrien KELLER
>>>>>>> 8b1b5302d64067d5866b98cbb7feae6699833589
*/

#include "archive/archive.h"

int	main(int argc, char **argv)
{
  int	c;

<<<<<<< HEAD
  verbose = 0;
  while ((c = getopt(argc, argv, "v")) != -1)
    {
      if (c == 'v')
	verbose = 1;
      if (c == '?')
	return (84);
    }

  printf("Verbose mode : %i\nOptind: %i\n", verbose, optind);
=======
  if (argc < 2)
  {
    write(2, "Not enough arguments\n", 21);
    return (84);
  }
  create_file(argc, argv);
>>>>>>> 8b1b5302d64067d5866b98cbb7feae6699833589

  return (0);
}
