/*
** create_file.c for rush1 in /home/adrien/rendu/CPE_2016_b2rush1/src/archive/
**
** Made by Adrien KELLER
** Login   <adrien.keller@epitech.eu>
**
** Started on  Sat Mar  4 14:14:06 2017 Adrien KELLER
** Last update Sun Mar  5 16:11:05 2017 Miles PROWER
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include "archive/archive.h"

int	create_header(int argc, char **argv, int opt1)
{
  t_posix_header	header;
  struct stat	st;
  int	i;

  if (opt1 == 2)
    i = 3;
  else
    i = 2;
  i++;
  while (i != argc)
    {
      stat(argv[i], &st);
      header = fill(header, st, argv[i]);
      //create_file(argv, );
    }
  return (0);
}

t_posix_header	fill(t_posix_header header, struct stat st, char *argv)
{
  strncpy(header.name, argv, 100);
  snprintf(header.mode, 8, "%07o", st.st_mode);
  header.uid = st.st_uid;
  header.gid = st.st_gid;
  header.size = st.st_size;
  header.mtime = st.st_mtim.tv_sec;
  header.checksum = cheksum();
  header.typeflag = type(); //???
  header.linkname = link;
  header.magic = "ustar";
  header.version = "00";
  strncpy(header.uname, getgrgid(), 32);
  strncpy(header.gname, getpwuid(), 32);
  header.devmajor = st.devmajor;
  header.devminor = st.devminor;
  header.prefix = prefix;
  header.pad = pad;
  return (header);
}
