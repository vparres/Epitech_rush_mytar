/*
** create_file.c for rush1 in /home/adrien/rendu/CPE_2016_b2rush1/src/archive/
**
** Made by Adrien KELLER
** Login   <adrien.keller@epitech.eu>
**
** Started on  Sat Mar  4 14:14:06 2017 Adrien KELLER
** Last update Sat Mar  4 15:25:39 2017 Adrien KELLER
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

#include "archive/archive.h"

int	create_file(int argc, char **argv, int opt1)
{
  struct stat	st;
  int	i;

  if (opt1 == 2)
    i = 3;
  else
    i = 2;
  while (i != argc)
  {
    stat(argv[i], &st);
    printf("size of file %i : %l\n", i, st.st_size);
    i++;
  }
  //create_header();
  return (0);
}
