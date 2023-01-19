/* Stacks Operations - Push, Pop, Peek & Display */
/* M M Dhaygude */
/* 08-Jan-2010, Fri, 12.30 PM */

#include <stdio.h>
#include <conio.h>

#define MAXSIZE 10

void push(void);
void pop(void);
void peek(void);
void display(void);

int stack[MAXSIZE] = {0};
int top = -1;


void main()
{
 int option;
 do
 {
  clrscr();
  printf("Stack Operations Available are :-\n");
  printf("----- ---------- --------- ---\n\n");
  printf("1] Push\n");
  printf("2] Pop\n");
  printf("3] Peek\n");
  printf("4] Display\n");
  printf("5] Exit\n");
  printf("\nSelect Option - ");
  flushall();
  scanf("%d",&option);
  switch (option)
  {
   case 1 :
    push();
   break;
   case 2 :
    pop();
   break;
   case 3 :
    peek();
   break;
   case 4 :
    display();
   break;
   case 5 :
    printf("Exiting from program...\n");
    getch();
   break;
   default :
    printf("Error - Invalid Option Selected...\n");
    getch();
   break;
  }
 } while (option != 5);
}

void push(void)
{
 int value;
 if (top == MAXSIZE-1)
 {
  printf("Stack Overflow...Can NOT Push...\n");
  getch();
  return;
 }
 printf("Enter the value to be stored in the stack -");
 flushall();
 scanf("%d", &value);
 stack[++top] = value;
}

void pop(void)
{
 if (top == -1)
 {
  printf("Stack Underflow...Can NOT Pop...\n");
  getch();
  return;
 }
 printf("Stack Element Popped = %d\n", stack[top--]);
 getch();
}


void peek(void)
{
 if (top == -1)
 {
  printf("Stack is Empty...Can NOT Peek...\n");
  getch();
  return;
 }
 printf("Stack Element at top = %d\n", stack[top]);
 getch();
}

void display(void)
{
 int i;
 if (top == -1)
 {
  printf("Stack Empty...Can NOT Display...\n");
  getch();
  return;
 }
 printf("Total no of elements stored in the stack = %d\n", top+1);
 printf("\tSr. No.\tElement Value\n");
 printf("\t-------\t--------------\n");
 for (i=top; i>=0; i--)
 {
  printf("\t  %d  \t    %d\n", i+1, stack[i]);
 }
 getch();
}
