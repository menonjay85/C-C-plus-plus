/* Sum of first 100 numbers using only SMA */
/* Moreshwar M Dhaygude */
/* 13-Nov-2009, Fri, 5.30 PM */

#include <stdio.h>
#include <conio.h>

void main()
{
 int i, sum;
 clrscr();
 printf("Sum of 100 integrs using only SMA\n");
 printf("--- -- --- ------- ----- ---- ---\n\n");
 for (i=1, sum=0; i <=100; i++)
  sum += i;
 printf("sum = %d\n", sum);
 getch();
}