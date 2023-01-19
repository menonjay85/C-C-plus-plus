/* ASCII Chart Program */
/* Moreshwar M Dhaygude */
/* 21-Nov-2009, Sat, 5.05 PM */

#include <stdio.h>
#include <conio.h>


void main()
{
 unsigned char ch;
 int i;
 clrscr();
 printf("ASCII Chart Program\n");
 printf("----- ----- -------\n\n");
 printf("\tASCII Value\tASCII Character\n");
 printf("\t-----------\t---------------\n\n");
 for (i=0; i<=255;i++)
 {
  ch = i;
  printf("\t%d ----------> %c\n",ch,ch);
  if (i>0 && i%20==0)
   getch();
 }
 getch();
}
