/* Program to show dynamic creation of 2-D arrays. */
/* 01-Oct-2009, Thu, 2.45 PM */

#include <stdio.h>
#include <conio.h>

#define ROWS 5
#define COLS 10

#define NULL 0

void main(void)
{
 int **a = NULL;
 int i, j;

/* Dynamic Creation of 2-D Arrays */
 for(i=0; i<ROWS; i++)
 {
  a[i] = (int *) calloc(sizeof(int), COLS);
  if (a[i] == NULL)
  {
   printf("Memory allocation failed in row no + %d\n", (i+1));
   printf("Serious Error - Abnormal Program Termination\n\n");
   getch();
   exit(1);
  }
 }

 clrscr();
 printf("\nUse of 2-D Arrays\n");
 printf("--- -- --- ------\n\n");
 for (i=0; i<ROWS; i++)
 {
  printf("\tRow No\tCol No\tElement Value\n");
  printf("\t------\t------\t-------------\n");
  for (j=0; j<COLS; j++)
  {
   a[i][j] = (i+1) + (j+1);
   printf("\t%d\t%d\t%d\t%d\t%d\n", (i+1), (j+1), a[i][j], *(a[i]+j), *(*(a+i)+j));
  }
  getch();
  clrscr();
 }
 getch();
}