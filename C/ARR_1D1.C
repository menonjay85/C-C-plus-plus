/* Program to access 1-D arrays using pointers */
/* 29-Sep-2009, Tue, 12.00 PM */

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

void main()
{
 int a[SIZE] = {0};
 int i;
 clrscr();
 printf("Memory Maps of 1-D Arrys and Access through Pointers\n");
 printf("------ ---- -- --- ----- --- ------ ------- --------\n\n");
 randomize();
 for(i=0; i<10; i++)
 {
  a[i] = rand()%100;
  printf("%-2d - %d\n\n", i+1, a[i]);
 }

 printf("\n\nContents of a[5] location = %d\n", a[5]);
 printf("\n\nContents of a[5] location = %d\n", *(a+5));
 getch();
}
