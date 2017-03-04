/*
** create_file.c for rush1 in /home/adrien/rendu/CPE_2016_b2rush1/src/archive/
**
** Made by Adrien KELLER
** Login   <adrien.keller@epitech.eu>
**
** Started on  Sat Mar  4 14:14:06 2017 Adrien KELLER
** Last update Sat Mar  4 14:24:03 2017 Adrien KELLER
*/

#include "archive/archive.h"

int	create_file(char **argv)
{
  struct stat	st;

  stat(argv[2], &st);
  printf("size : %i\n", st.st_size);
  return (0);
}
