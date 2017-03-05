/*
** archive.h for my_archive in /home/tails/Perso/Git/CPE_2016_b2rush1/include
**
** Made by Miles PROWER
** Login   <tails@epitech.net>
**
** Started on  Fri Mar  3 21:45:07 2017 Miles PROWER
** Last update Sun Mar  5 16:21:28 2017 Miles PROWER
*/

#ifndef ARCHIVE_H_
# define ARCHIVE_H_

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

static int	verbose;

t_posix_header	fill(t_posix_header header, struct stat st, char *argv);
int		create_header(int, char **, int);
int		create_archive(char **char_name);
int		create_file(int fd_arch, int fd_file, t_posix_header *header);
int		close_archive(int fd_arch);

#endif /* !ARCHIVE_H_ */
