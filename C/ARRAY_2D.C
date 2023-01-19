/* Program to show use of 2-D arrays. */
/* 01-Oct-2009, Thu, 2.45 PM */

#include <stdio.h>
#include <conio.h>

#define ROWS 5
#define COLS 10

void main(void)
{
 int a[ROWS][COLS] = {0};
 int i, j;
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