/* Swapping two variables using call by reference */
/* Moreshwar M Dhaygude */
/* 14-Nov-2009, Sat, 4.55 PM */

#include <stdio.h>
#include <conio.h>

void swap(int *, int *);

void main()
{
 int m = 11;
 int n = 22;
 clrscr();
 printf("Swapping using Call By Reference\n");
 printf("-------- ----- ---- -- ---------\n\n");
 printf("Value of m Before Swapping = %d\n", m);
 printf("Value of n Before Swapping = %d\n", n);
 swap(&m, &n);
 printf("\n\nValue of m After Swapping = %d\n", m);
 printf("Value of n After Swapping = %d\n", n);
 getch();
}

void swap(int *p1, int *p2)
{
 int temp = *p1;
 *p1 = *p2;
 *p2 = temp;
}