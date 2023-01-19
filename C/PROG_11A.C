/* Menu Driven Program - Data Structure - DLL - Doubly Linked Lists */
/* Operations - Insert, Delete, Update, Display, Seacrh, reverse etc. */
/* Moreshwar M Dhaygude */
/* 11-Dec-2009, Fri, 5.40 PM */

#include <stdio.h>
#include <conio.h>
#include <alloc.h>

#define NULL 0

struct ll_node
{
  struct ll_node *prev;
  int data;
  struct ll_node *next;
};

struct ll_node *head = NULL;
struct ll_node *tail = NULL;
struct ll_node *cur_ptr = NULL;
struct ll_node *pre_ptr = NULL;
struct ll_node *new_ptr = NULL;

int count = 0; /* Global Declaration */

void insert(void); /* Function Proto Types */
void display(void);
void delet(void);
int search(void);
/*
void reverse(void);
void update(void);
*/

void main()
{
 int option;
 do
 {
  clrscr();
  printf("\n\nDLL Operations\n");
  printf("--- ----------\n\n");
  printf("1] Insert\n");
  printf("2] Delete\n");
  printf("3] Update\n");
  printf("4] Display\n");
  printf("5] Search\n");
  printf("6] Reverse\n");
  printf("7] Exit\n\n\n");
  printf("Select Option - ");
  flushall();
  scanf("%d", &option);
  switch (option)
  {
   case 1 :
    printf("Insert operation is selected...\n");
    getch();
    insert();
    break;
   case 2 :
    printf("Delete operation is selected...\n");
    getch();
    delet();
    break;
   case 3 :
    printf("Update operation is selected...\n");
    getch();
/*    update(); */
    break;
   case 4 :
    printf("Display operation is selected...\n");
    getch();
    display();
    break;
   case 5 :
    printf("Search operation is selected...\n");
    getch();
    search();
    break;
   case 6 :
    printf("Reverse operation is selected...\n");
    getch();
/*     reverse(); */
    break;
   case 7 :
    printf("Exit operation is selected...\n");
    getch();
    break;

   default :
    printf("Error - Invalid Option is Selected...\n");
    getch();
    break;
  }
 } while (option != 7);
 clrscr();
 printf("\nProgram Finished...\n");
 getch();
}

/* Insert function is defined here */
void insert(void)
{
 int pos = 0;
 int i, value;

 new_ptr = (struct ll_node *) malloc(sizeof(struct ll_node));
 if (new_ptr == NULL)
 {
  printf("\nMemory Overflow...Can NOT insert...");
  getch();
  return;
 }

 input :
 printf("\nEnter position to insert at [From %d Upto %d] - ", 1, count+1);
 flushall();
 scanf("%d", &pos);
 if (pos < 1 || pos > (count+1))
 {
  printf("\nInvalid position selected...\n");
  getch();
  goto input;
 }
 printf("\nEnter the new value to be stored in the array - ");
 flushall();
 scanf("%d",&value);
 new_ptr->data=value;
 if (pos == 1 && count == 0)
 {
  head = new_ptr;
  tail = new_ptr;
  new_ptr->prev = NULL;
  new_ptr->next = NULL;
 }
 else if (pos == 1)
 {
  head->prev = new_ptr;
  new_ptr->next = head;
  new_ptr->prev = NULL;
  head = new_ptr;
 }
 else if (pos == count+1)
 {
  tail->next = new_ptr;
  new_ptr->prev = tail;
  tail = new_ptr;
  new_ptr->next = NULL;
 }
 else
 {
  for (i=1,cur_ptr=head,pre_ptr=NULL; i<pos; i++)
  {
   pre_ptr = cur_ptr;
   cur_ptr = cur_ptr->next;
  }

  (cur_ptr->prev)->next = new_ptr;
  new_ptr->prev = cur_ptr->prev;
  new_ptr->next = cur_ptr;
  cur_ptr->prev = new_ptr;
/*
  cur_ptr->prev = new_ptr;
  pre_ptr->next = new_ptr;
  new_ptr->next = cur_ptr;
  new_ptr->prev = pre_ptr;
*/
 }
 count++;
}

void display(void)
{
 int i;
 if (count == 0)
 {
  printf("DLL is EMPTY...Nothing to display...");
  getch();
  return;
 }
 printf("\nTotal Count of DLL Elements = %d\n", count);
 printf("\nAddres of first node = %u\n", head);
 printf("\nAddress of last node = %u\n\n\n", tail);

 printf("Display of DLL Elements -\n");
 printf("------- -- --- --------\n\n");
 printf("Position\tElement Value\tprevious\tcurrent\t\tNext\n");
 printf("--------\t-------------\t--------\t-------\t\t-------\n\n");
 for (cur_ptr=head, i=1; cur_ptr!=NULL; cur_ptr=cur_ptr->next, i++)
 {
  printf("    %d\t\t%d\t\t%u\t\t%u\t\t%u\n", i, cur_ptr->data, cur_ptr->prev, cur_ptr, cur_ptr->next);
 }
 getch();
}

void delet(void)
{
 int pos = 0;
 int i;

 if (count == 0)
 {
  printf("\nDLL Underflow...Can NOT delete...");
  getch();
  return;
 }

 input :
 printf("\nEnter position to delete at [From %d Upto %d] - ", 1, count);
 flushall();
 scanf("%d", &pos);
 if (pos < 1 || pos > count)
 {
  printf("\nInvalid position selected...\n");
  getch();
  goto input;
 }
 if (count==1)
 {
  cur_ptr=head;
  head=NULL;
  tail=NULL;
 }
 else if (pos==1)
 {
  cur_ptr=head;
  head=head->next;
  head->prev=NULL;
 }
 else if (pos==count)
 {
  cur_ptr=tail;
  tail=tail->prev;
  tail->next=NULL;
 }
 else
 {
  for (i=1,cur_ptr=head,pre_ptr=NULL; i<pos; i++)
  {
   pre_ptr = cur_ptr;
   cur_ptr = cur_ptr->next;
  }
  pre_ptr->next=cur_ptr->next;
  (cur_ptr->next)->prev=pre_ptr;
 }
 count--;
 printf("DLL node at position %d with data = %d is deleted...\n\n",pos,cur_ptr->data);
 getch();
 free(cur_ptr);
}


int search(void)
{
 int value;
 int i;
 if (count == 0)
 {
  printf("DLL is EMPTY...Nothing to search...");
  getch();
  return 0;
 }
 printf("\nEnter the value to search for in the DLL - ");
 flushall();
 scanf("%d",&value);
 for (i=1, cur_ptr=head; cur_ptr!=NULL; cur_ptr=cur_ptr->next,i++)
 {
  if (cur_ptr->data == value)
  {
   printf("\nValue = %d Found at position = %d\n\n", value, i);
   getch();
   return 1;
  }
 }
 printf("\nValue = %d NOT Found...\n\n", value);
 getch();
 return 0;
}


/*
void reverse(int *a)
{
 int i, j;
 int temp;
 for (i=0, j=count-1; i<j; i++, j--)
 {
  temp = a[i];
  a[i] = a[j];
  a[j] = temp;
 }
}

void update(int *a)
{
 int pos = 0;
 int i, value;
 if (count == 0)
 {
  printf("Array is EMPTY...Nothing to update...");
  getch();
  return;
 }
 input :
 printf("\nEnter position to update at [From %d Upto %d] - ", 1, count);
 flushall();
 scanf("%d", &pos);
 if (pos < 1 || pos > count)
 {
  printf("\nInvalid position selected...\n");
  getch();
  goto input;
 }
 printf("\nEnter the new value to be stored in the array - ");
 flushall();
 scanf("%d",&value);
 a[pos-1] = value;
}

void delet(int *a)
{
 int pos = 0;
 int i, value;
 if (count == 0)
 {
  printf("Array is EMPTY...Nothing to delete...");
  getch();
  return;
 }
 input :
 printf("\nEnter position to delete at [From %d Upto %d] - ", 1, count);
 flushall();
 scanf("%d", &pos);
 if (pos < 1 || pos > count)
 {
  printf("\nInvalid position selected...\n");
  getch();
  goto input;
 }
 value = a[pos-1];
 for (i=pos-1; i<count; i++)
  a[i] = a[i+1];
 count--;
 printf("\nValue = %d at position = %d is deleted...\n", value, pos);
 getch();
}
*/