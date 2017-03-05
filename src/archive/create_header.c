/*
** create_file.c for rush1 in /home/adrien/rendu/CPE_2016_b2rush1/src/archive/
**
** Made by Adrien KELLER
** Login   <adrien.keller@epitech.eu>
**
** Started on  Sat Mar  4 14:14:06 2017 Adrien KELLER
** Last update Sun Mar  5 16:44:06 2017 Adrien KELLER
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
      lstat(argv[i], &st);
      header = fill(header, st, argv[i]);
      //create_file(argv, );
    }
  return (0);
}

t_posix_header	fill(t_posix_header header, struct stat st, char *argv)
{
  int	size;

  if (type(st) != 0)
    size = 0;
  else
    size = st.st_size;
  strncpy(header.name, argv, 100);
  snprintf(header.mode, 8, "%07o", st.st_mode);
  snprintf(header.uid, 8, "%07o", st.st_uid);
  snprintf(header.gid, 8, "%07o", st.st_gid);
  snprintf(header.typeflag, 1, "%00o", type());
  snprintf(header.size, 12, "%011o", size);
  snprintf(header.mtime, 12, "%011o", st.st_mtim.tv_sec);
  snprintf(header.checksum, 8, "%07o", cheksum());
  snprintf(header.linkname, 100, "%099o", link);
  snprintf(header.magic, 6, "%05o", "Ustar");
  snprintf(header.version, 2, "%01o", "00");
  strncpy(header.uname, getgrgid(), 32);
  strncpy(header.gname, getpwuid(), 32);
  snprintf(header.devmajor, 8, "%07o", devmajor);
  snprintf(header.devminor, 8, "%07o", devminor);
  snprintf(header.prefix, 155, "%0154o", "\0");
  snprintf(header.pad, 12, "%011o", pad);
  return (header);
}

int	type(struct stat st)
{
  if (st.st_mode == S_IFREG)
    return (0);
  if (st.st_mode == S_IFLNK)
    return (2);
  if (st.st_mode == S_IFDIR)
    return (5);
}

int	checksum()
{
  int	checksum;

  checksum = 0;
  return (checksum);
}
