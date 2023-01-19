/* Program to dynamically create 1-D arrays using pointers */
/* 29-Sep-2009, Tue, 12.00 PM */

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <alloc.h>

#define NULL 0

void main()
{
 int *a;
 int i;
 int n;
 clrscr();
 printf("Dynamic Creation of 1-D Arrys and Access through Pointers\n");
 printf("------- -------- -- --- ----- --- ------ ------- ---------\n\n");
 printf("What is the si
 ze of the 1-D array to be created - ");
 flushall();
 scanf("%d",&n);
 a = (int *) calloc(sizeof(int),n);
 if (a == NULL)
 {
  printf("\n\nDynamic Memory Allocation Failed...\n");
  printf("Abnormal Program Termination...\n");
  getch();
  exit(1);
 }
 randomize();
 for(i=0; i<n; i++)
 {
  a[i] = rand()%100;
  printf("\n\n%-2d - %d", i+1, a[i]);
 }

 printf("\n\nContents of a[5] location = %d\n", a[5]);
 printf("\n\nContents of a[5] location = %d\n", *(a+5));
 getch();
}
