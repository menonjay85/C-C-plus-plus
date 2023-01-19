/* 1-D Arrays using SMA */
/* Moreshwar M Dhaygude */
/* 14-Nov-2009, Sat, 5.15 PM */

#include <stdio.h>
#include <conio.h>
#define MAX 15

void main()
{
 int a[MAX] = {0};
 int i;
 clrscr();
 printf("1-D Arrays using SMA\n");
 printf("--- ------ ----- ---\n\n");
 for (i=0; i<MAX; i++)
 {
  a[i] = 100 + i*5;
 }
 printf("Display of Array Elements -\n\n");
 printf("Element No\tValue\tMemory Address\n");
 printf("----------\t-----\t--------------\n\n");
 for (i=0; i<MAX; i++)
 {
  printf("%d\t\t%d\t\t%u\n", (i+1), a[i], &a[i]);
  printf("\t\t%d\t\t%u\n", *(a+i), (a+i));
  printf("\n");
 }
 getch();
}
