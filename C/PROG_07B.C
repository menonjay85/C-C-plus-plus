/* 1-D Arrays using DMA */
/* Moreshwar M Dhaygude */
/* 20-Nov-2009, Fri, 5.10 PM */

#include <stdio.h>
#include <conio.h>
#include <alloc.h>
#include <stdlib.h>


void main()
{
 int n;
 int *a;
 int i;
 clrscr();
 printf("1-D Arrays using DMA\n");
 printf("--- ------ ----- ---\n\n");
 printf("Enter the size of the 1-D array - ");
 flushall();
 scanf("%d", &n);
 a = (int *) calloc(sizeof(int), n);
 if (a==NULL)
 {
  printf("DMA failed...\n");
  printf("Abnormal Termination of Program...\n");
  getch();
  exit(1);
 }
 for (i=0; i<n; i++)
 {
  a[i] = 100 + i*5;
 }
 printf("Display of Array Elements -\n\n");
 printf("Element No\tValue\tMemory Address\n");
 printf("----------\t-----\t--------------\n\n");
 for (i=0; i<n; i++)
 {
  printf("%d\t\t%d\t\t%u\n", (i+1), a[i], &a[i]);
  printf("\t\t%d\t\t%u\n", *(a+i), (a+i));
  printf("\n");
 }
 getch();
}
