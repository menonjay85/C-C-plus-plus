/* Operator Precedence & Associativity */
/* Moreshwar M Dhaygude */
/* 13-Nov-2009, Fri, 5.00 PM */

#include <stdio.h>
#include <conio.h>

void main()
{
 int i = 10;
 int j = 20;
 int k = 0;
 clrscr();
 printf("Operator Precedence & Associativity\n");
 printf("-------- ---------- - -------------\n\n");
 k = i++ + ++j + ++i + j++;
 printf("i = %d, j = %d, k = %d\n", i, j, k);
 getch();
}