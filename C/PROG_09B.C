/* RAM Memory Jammer Program */
/* Moreshwar M Dhaygude */
/* 21-Nov-2009, Sat, 5.30 PM */

#include <stdio.h>
#include <conio.h>


void main()
{
 char *ptr = NULL;
 unsigned int i = 0;
 clrscr();
 printf("RAM Memory Jammer Program\n");
 printf("--- ------ ------ -------\n\n");
 printf("\tMemory Address\tContents of Memory\n");
 printf("\t--------------\t------------------\n\n");
 for (i=0; i<600; i++)
 {
  printf("\t%u - %u ----------> %c\n", i, ptr, (*ptr));
  *ptr = 'Z';
  printf("\t%u - %u ----------> %c\n\n", i, ptr, (*ptr));

  ptr++;
  if (i>0 && i%20==0)
   getch();
 }
 getch();
}
