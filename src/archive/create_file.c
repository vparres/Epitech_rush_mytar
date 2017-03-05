/*
** create_file.c for create_file in /home/tails/Perso/Git/CPE_2016_b2rush1
**
** Made by Miles PROWER
** Login   <tails@epitech.net>
**
** Started on  Sun Mar  5 15:04:55 2017 Miles PROWER
** Last update Sun Mar  5 16:21:22 2017 Miles PROWER
*/

#include <stdlib.h>
#include <stdio.h>
#include "archive/archive.h"

int	create_archive(char *arch_name)
{
  int	fd;

  fd = open(arch_name, O_RDWR | O_CREAT, S_IRUSR | S_IRGRP | S_IROTH);
  if (fd == -1)
    {
      printf("There was an error while creating archive ! (FD = %d)\n", fd);
      exit(84);
    }
  else
    return (fd);
}

int	create_file(int fd_arch, int fd_file, t_posix_header *header)
{
  int	i;

  i = 0;
  write(fd_arch, &header, 512); //write header
  if (verbose == 1)
    printf("%s", header->name);
  while (i =< file_size)
    {
      memset(&header, 0, 512);
      read(fd_file, &header, 512);
      i += write(fd_arch, &header, 512);
    }
  close (fd_file);
}

int	close_archive(int fd_arch)
{
  if (close(fd_arch) =! 0)
    {
      printf("There was an error while closing archive ! (FD = %d)\n", fd_arch);
      exit(84);
    }
  return (0);
}
