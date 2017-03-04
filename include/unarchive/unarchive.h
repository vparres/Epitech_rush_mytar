/*
** unarchive.h for my_unarchive in /home/tails/Perso/Git/CPE_2016_b2rush1/include
**
** Made by Miles PROWER
** Login   <tails@epitech.net>
**
** Started on  Fri Mar  3 21:47:16 2017 Miles PROWER
** Last update Sat Mar  4 13:55:02 2017 Miles PROWER
*/

#ifndef UNARCHIVE_H_
# define UNARCHIVE_H_

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

#endif /* !UNARCHIVE_H_ */
