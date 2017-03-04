/*
** archive.c for my_archive in /home/tails/Perso/Git/CPE_2016_b2rush1/src
**
** Made by Miles PROWER
** Login   <tails@epitech.net>
**
** Started on  Fri Mar  3 21:42:28 2017 Miles PROWER
** Last update Sat Mar  4 14:44:27 2017 Adrien KELLER
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>
#include "archive/archive.h"

int	main(int argc, char *argv[])
{

  if (argc < 2)
  {
    write(2, "Not enough arguments\n", 21);
    return (84);
  }
  create_file(argc, argv);

  return (0);
}
