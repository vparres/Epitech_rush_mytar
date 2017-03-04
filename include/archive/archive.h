/*
** archive.h for my_archive in /home/tails/Perso/Git/CPE_2016_b2rush1/include
**
** Made by Miles PROWER
** Login   <tails@epitech.net>
**
** Started on  Fri Mar  3 21:45:07 2017 Miles PROWER
** Last update Sat Mar  4 17:16:05 2017 Adrien KELLER
*/

#ifndef ARCHIVE_H_
# define ARCHIVE_H_

typedef struct	s_posix_header
{                              /* byte offset */
  char	name[100];               /*   0 */
  char	mode[8];                 /* 100 */
  char	uid[8];                  /* 108 */
  char	gid[8];                  /* 116 */
  char	size[12];                /* 124 */
  char	mtime[12];               /* 136 */
  char	chksum[8];               /* 148 */
  char	typeflag;                /* 156 */
  char	linkname[100];           /* 157 */
  char	magic[6];                /* 257 */
  char	version[2];              /* 263 */
  char	uname[32];               /* 265 */
  char	gname[32];               /* 297 */
  char	devmajor[8];             /* 329 */
  char	devminor[8];             /* 337 */
  char	prefix[155];             /* 345 */
  /* 500 */
}		t_posix_header;

# include <stdio.h>
# include <unistd.h>

static int	verbose;

int	create_file(int, char**, int);
int	create_header(int tar, int fd);

#endif /* !ARCHIVE_H_ */
