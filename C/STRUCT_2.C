/* Linked List Using DMA & Structures */
/* 05-Nov-2009, The, 4.00 PM */

#include <stdio.h>
#include <conio.h>
#include <alloc.h>

struct node
{
 int data;
 struct node *next; /* Self Referencing Pointer */
};

struct node *head = NULL;
int count = 0;

void append(void);
void display(void);

void main()
{
 int option ;
 do
 {
  clrscr();
  printf("Linked List Using DMA & Structures :-\n");
  printf("------ ---- ----- --- - ----------\n\n");
  printf("Options Available Are :-\n\n");
  printf("1] Append a node\n");
  printf("2] Display All Nodes\n");
  printf("3] Exit\n\n");
  printf("Enter Option - ");
  flushall();
  scanf("%d", &option);
  switch (option)
  {
   case 1:
   append();
   break;
   case 2:
   display();
   break;
   case 3:
   break;
   default :
    printf("\n\nError in Input...Retry...\n");
    getch();
    break;
  }
 } while (option != 3);

  printf("\n\nEnd of Program...\n");
  getch();
}

/* Function to Append a node to the linked list */
void append(void)
{
 struct node *temp = NULL;
 struct node *ptr = NULL;
 struct node *prev = NULL;
 int m;
 temp = (struct node *) malloc(sizeof(struct node));
 if (temp == NULL)
 {
  printf("\nMemory Allocation Failed...\n\n");
  getch();
  return;
 }
 printf("Enter Data for New Node ----> ");
 flushall();
 scanf("%d", &m);
 temp->data = m;
 temp->next = NULL;
 if (count == 0)
 {
  head = temp;
 }
 else
 {
  for (prev = NULL, ptr = head; ptr != NULL; ptr=ptr->next)
  {
   prev = ptr;
  }
  prev->next = temp;
 }
 count++;
}

/* Function to Display all nodes of the linked list */
void display(void)
{
 struct node *ptr = NULL;
 int i = 0;
 if (count == 0)
 {
  printf("\n\nLinked List is Empty...Nothing to display...\n\n");
  getch();
  return;
 }
 printf("\n\nHead pointer = %u\n\n", head);
 printf("Total No Of Nodes = %d\n\n", count);
 printf("\tSr No\tData\tCurrent Address\tNext Pointer\n");
 printf("\t-----\t----\t------- -------\t------------\n\n");
 for (i=1,ptr=head; ptr!= NULL; i++, ptr = ptr->next)
 {
  printf("\t  %d  \t%d\t  %u  \t  %u\n",i,ptr->data,ptr,ptr->next);
 }
 getch();
}
