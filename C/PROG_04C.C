/* Sum of first 100 numbers using DMA & Pointers */
/* Moreshwar M Dhaygude */
/* 14-Nov-2009, Sat, 4.20 PM */

#include <stdio.h>
#include <conio.h>
#include <alloc.h>

void main()
{
 int *p1, *p2;
 clrscr();
 printf("Sum of 100 integrs using SMA & Pointers\n");
 printf("--- -- --- ------- ----- --- - --------\n\n");
 p1 = (int *) malloc(sizeof(int));
 if (p1 == NULL)
 {
  printf("Memory allocation for pointer p1 failed...");
  getch();
  exit(1);
 }
 p2 = (int *) malloc(sizeof(int));
 if (p2 == NULL)
 {
  printf("Memory allocation for pointer p2 failed...");
  getch();
  exit(1);
 }
 for (*p1=1, *p2=0; *p1 <=100; (*p1)++)
  *p2 += *p1;
 printf("sum = %d\n", *p2);
 getch();
}