Epitech Rush : my_tar
=====================
Description
-----------
This is the first rush of the year we've got at Epitech : the my_tar.
The goal of the project is to recode the most important part of the GNU's tar available on UNIX systems.

For this project, we're authorized to use the whole libC, execpt execve or any binary launching functions, for obvious reasons. The rush lasted all the week-end.

At the time i edit this README, the project is unfinished, but my buddy and i decided to finish it when it's possible.

Subject
-------
### my_tar :
* 3 programs : `my_archive`, `my_unarchive` and `my_tar`
* Should be coded in C
* Compiles with a Makefile
* Should complies with the POSIX's ustar norm.

*Usage :*

```Tails-sh $> ./my_archive
Usage: ./my_archive [archive_name] [files ...]```

```Tails-sh $> ./my_unarchive
Usage: ./my_unarchive [archive_name]```

```Tails-sh $> ./my_tar cf toto file1 directory1 file2
Tails-sh $> ./my_tar xf toto```

For the my_tar xcft options are mendatory. We also decided to implent the v option.

Just a note
-----------
Remember, if you're an Epitech student, you can watch this code to help you, but be careful, the -42 mark comes faster than you think.


***Enjoy !***