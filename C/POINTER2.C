/* Pointer To FUnctions */
/* 03-Nov-2009, Tue, 12.45 AM */

#include <stdio.h>
#include <conio.h>
#include <string.h>

int add1(int, int);
int add2(int *, int *);
int * add3(int *, int *);
int p = 0;
void main()
{
 int (*fptr) (); /* Pointer to function */
 int m, n;
 int *ptr;
 clrscr();
 printf("Pointers To Functions :-\n");
 printf("-------- -- ---------\n\n");
 printf("Enter a number - ");
 flushall();
 scanf("%d", &m);
 printf("Enter another number - ");
 flushall();
 scanf("%d", &n);
 p = add1(m,n); /* Call add function by passing value */
 printf("Using add1 function answer = %d\n\n", p);
 p = 0;
 fptr = add1;
 p = (*fptr)(m,n); /* Call add function by passing value */
 printf("Using pointer to add1 function answer = %d\n\n", p);
 p = 0;
 fptr = add2;
 p = (*fptr)(&m, &n);
 printf("Using pointer to add2 function answer = %d\n\n", p);
 fptr = add3;
 ptr = (*fptr)(&m,&n);
 printf("Using pointer to add3 function answer = %d\n\n", (*ptr));

 printf("\n\nEnd of Program...\n");
 getch();
}

int add1(int t1, int t2)
{
 return (t1+t2);
}

int add2(int *p1, int *p2)
{
 return ((*p1)+(*p2));
}

int * add3(int *p1, int *p2)
{
 p = (*p1) + (*p2);
 return (&p);
}