/* Circular Queues Operations - Enqueue, Dequeue, Display */
/* M M Dhaygude */
/* 09-Jan-2010, Sat, 11.45 PM */

#include <stdio.h>
#include <conio.h>

#define MAXSIZE 10

void enqueue(void);
void dequeue(void);
void display(void);

int queue[MAXSIZE] = {0};
int front = -1;
int rear = -1;

void main()
{
 int option;
 do
 {
  clrscr();
  printf("\n\nCircular Queue Operations Available are :-\n");
  printf("-------- ----- ---------- --------- ---\n\n");
  printf("1] Enqueue\n");
  printf("2] Dequeue\n");
  printf("3] Display\n");
  printf("4] Exit\n");
  printf("\nSelect Option - ");
  flushall();
  scanf("%d",&option);
  switch (option)
  {
   case 1 :
    enqueue();
   break;
   case 2 :
    dequeue();
   break;
   case 3 :
    display();
   break;
   case 4 :
    printf("Exiting from program...\n");
    getch();
   break;
   default :
    printf("Error - Invalid Option Selected...\n");
    getch();
   break;
  }
 } while (option != 4);
}

void enqueue(void)
{
 int value;
 if (front == ((rear+1)%MAXSIZE))
 {
  printf("Queue Overflow...Can NOT Enqueue...\n");
  getch();
  return;
 }
 printf("Enter the value to be added in the Queue - ");
 flushall();
 scanf("%d", &value);
 rear = (++rear)%MAXSIZE;
 queue[rear] = value;
 if (front == -1)
  front++;
}

void dequeue(void)
{
 if (front == -1 && rear == -1)
 {
  printf("Queue Underflow...Can NOT Dequeue...\n");
  getch();
  return;
 }
 printf("Element value Dequeued = %d\n", queue[front]);
 if (front == rear)
  front = rear = -1;
 else
  front = (++front)%MAXSIZE;
 getch();
}

void display(void)
{
 int i;
 int count = 0;
 if (front == -1 && rear == -1)
 {
  printf("Queue Empty...Can NOT Display...\n");
  getch();
  return;
 }
 if (front <= rear)
  count = rear - front + 1;
 else
  count = MAXSIZE - front + rear + 1;
 printf("Total no of elements stored in the queue = %d\n", count);
 printf("\tSr. No.\tElement Value\n");
 printf("\t-------\t--------------\n");
 if (front <= rear)
 {
  for (i=front; i<=rear; i++)
   printf("\t  %d  \t    %d\n", i+1, queue[i]);
 }
 else
 {
   for (i=front; i<MAXSIZE; i++)
    printf("\t  %d  \t    %d\n", i+1, queue[i]);
   for (i=0; i<=rear; i++)
    printf("\t  %d  \t    %d\n", i+1, queue[i]);
 }
 getch();
}
