/* Program jams the RAM with foreign code */
/* virus_z.c */
/* 22-Sep-2009, Tue, 13.00 hrs */

#include <stdio.h>
#include <conio.h>
#define NULL 0

void main()
{
 char *ptr = NULL;
 unsigned int i;
 clrscr();
 for (i=0; i<255; i++)
 {
  if (i%22==0)
  {
   getch();
   clrscr();
   printf("\tSr No\tCharacter\tASCII Value\n");
   printf("\t-----\t---------\t-----------\n\n");
  }
  if (i%8==0)
   *ptr='V';
  if (i%8==1)
   *ptr='i';
  if (i%8==2)
   *ptr='r';
  if (i%8==3)
   *ptr='u';
  if (i%8==4)
   *ptr='s';
  if (i%8==5)
   *ptr='-';
  if (i%8==6)
   *ptr='Z';
  if (i%8==7)
   *ptr='';
  printf("\t %d\t     %c\t\t%d\n",i,(*ptr),(*ptr));
  ptr++;
 }
getch();
}