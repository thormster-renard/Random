/*
** header.h for Medev in /home/thormster/Dev/Melev/inc
** 
** Made by thormster
** Login   <thormster@localhost>
** 
** Started on  Sat Dec 28 23:29:12 2019 thormster
** Last update Mon Jan 20 15:50:44 2020 thormster
*/

#ifndef		__HEADER_H__
#define		__HEADER_H__

#include	<stdlib.h>
#include	<string.h>
#include	<sys/types.h>
#include	<time.h>
#include	<unistd.h>

#define		ERR		-1

/* help.c */
int		xhelp();

/* main.c */
int		display_password(char*);
int		check_length(int, char**);
int		quit_prog(char*);

/* random.c*/
char		*random_generator(int);

/* xlibc.c */
void		xputchar(char);
void		xputstr(char*);
void		xputnbr(int);
int		xstrlen(char*);

#endif
