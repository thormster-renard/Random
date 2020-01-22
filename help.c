/*
** help.c for random in /home/thormster/Dev/random
** 
** Made by thormster
** Login   <thormster@localhost>
** 
** Started on  Sun Jan 12 18:36:24 2020 thormster
** Last update Mon Jan 20 15:45:20 2020 thormster
*/

#include	"header.h"

int		xhelp()
{
  xputstr("random - Outil de génération de caractères aléatoire\n");
  xputstr("Commandes :");
  xputstr("\tpassword   \tGénère une suite de caractères ASCII");
  xputstr("		\tPar défaut de 8 caractères");
  xputstr("		\tCommande : random passowrd [LONGUEUR]\n");
  xputstr("		\tExemple :  random passowrd 19\n\n");
  xputstr("\tnumber	\tGénère une longueur compris par défaut à 8");
  xputstr("		\tCommande : random number [LONGUEUR]\n");
  xputstr("		\tExemple :  random number 0-100");
  return (ERR);
}
