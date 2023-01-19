/* Program to calculate the nth term of fibonacci series */
/* Author - Moreshwar M. Dhaygude */
/* Date : 16-Sep-2002 */

#include <stdio.h>
#include <conio.h>

void main()
{
 int i, n_term, c_term, p_term, number;
 char cont = 'Y';
 while (cont == 'Y' || cont == 'y')
 {
  clrscr();
  printf("\nFibonacci Series :-\n");
  printf("--------- ------\n\n");
  printf("Upto which term you want to calculate the fibonacci series - ");
  flushall();
  scanf("%d", &number);
  p_term = 1;
  c_term = 1;
  printf("\nPosition    Term\n");
  printf("--------   -----\n");
  printf("%2d --------> %d\n", 1, p_term);
  printf("%2d --------> %d\n", 2, c_term);
  for (i=3; i<=number; i++)
  {
   n_term = c_term + p_term;
   printf("%2d --------> %d\n", i, n_term);
   p_term = c_term;
   c_term = n_term;
   if ((i%10) == 0)
    getch();
  }
  printf("\n\nDo you want to continue the program (Y or y) - ");
  flushall();
  scanf("%c", &cont);
 }
}
