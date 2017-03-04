/*
** archive.c for my_archive in /home/tails/Perso/Git/CPE_2016_b2rush1/src
**
** Made by Miles PROWER
** Login   <tails@epitech.net>
**
** Started on  Fri Mar  3 21:42:28 2017 Miles PROWER
** Last update Sat Mar  4 14:13:46 2017 Adrien KELLER
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>
#include "../../include/archive/archive.h"

int	main(int argc, char *argv[])
{
  struct stat	st;

  if (argc < 2)
  {
    write(2, "Not enough arguments\n", 21);
    return (84);
  }
  stat(argv[2], &st);
  printf("size : %i\n", st.st_size);
  create_file(argv);

  return (0);
}
