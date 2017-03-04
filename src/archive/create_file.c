/*
** create_file.c for rush1 in /home/adrien/rendu/CPE_2016_b2rush1/src/archive/
**
** Made by Adrien KELLER
** Login   <adrien.keller@epitech.eu>
**
** Started on  Sat Mar  4 14:14:06 2017 Adrien KELLER
** Last update Sat Mar  4 17:56:03 2017 Miles PROWER
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "archive/archive.h"

int	create_file(int argc, char **argv, int opt1)
{
  struct stat	st;
  int	i;
  int	fd;
  int	tar;
  char *buff;

  if (opt1 == 2)
    i = 2;
  else
    i = 1;
  fopen(argv[i], "wr");
  tar = open(argv[i], O_RDWR);
  i++;
  while (i != argc)
    {
      stat(argv[i], &st);
      printf("size of file %i : %ld\n", i, st.st_size);
      buff = malloc(sizeof(char) * st.st_size + 1);
      fd = open(argv[i], O_RDWR);
      read(fd, buff, st.st_size);
      create_header(tar, fd);
      write(tar, buff, st.st_size);
      i++;
    }
  return (0);
}

int	create_header(int tar, int fd)
{
  t_posix_header	header;

  write(tar, "[INSERER LE HEADER POSIX]\n\n\n", 28);
  return (0);
}
