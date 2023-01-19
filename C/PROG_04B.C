/* Sum of first 100 numbers using SMA & Pointers */
/* Moreshwar M Dhaygude */
/* 13-Nov-2009, Fri, 5.45 PM */

#include <stdio.h>
#include <conio.h>

void main()
{
 int i, sum;
 int *p1, *p2;
 p1 = &i;
 p2 = &sum;
 clrscr();
 printf("Sum of 100 integrs using SMA & Pointers\n");
 printf("--- -- --- ------- ----- --- - --------\n\n");
 for (*p1=1, *p2=0; *p1 <=100; (*p1)++)
  *p2 += *p1;
 printf("sum = %d\n", *p2);
 getch();
}