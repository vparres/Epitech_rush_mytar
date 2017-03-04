/*
** tar.h for my_tar in /home/tails/Perso/Git/CPE_2016_b2rush1
**
** Made by Miles PROWER
** Login   <tails@epitech.net>
**
** Started on  Sat Mar  4 17:46:40 2017 Miles PROWER
** Last update Sat Mar  4 17:47:01 2017 Miles PROWER
*/

#ifndef TAR_H_
# define TAR_H_

typedef struct	s_posix_header
{
  char	name[100];
  char	mode[8];
  char	uid[8];
  char	gid[8];
  char	size[12];
  char	mtime[12];
  char	chksum[8];
  char	typeflag;
  char	linkname[100];
  char	magic[6];
  char	version[2];
  char	uname[32];
  char	gname[32];
  char	devmajor[8];
  char	devminor[8];
  char	prefix[155];
  char	pad[12];
}		t_posix_header;

# include <stdio.h>
# include <unistd.h>

static int	verbose;

int	create_file(int, char**, int);
int	create_header(int tar, int fd);

#endif /* !TAR_H_ */
