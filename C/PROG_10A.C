/* Menu Driven Program - Data Structure - Arrays - */
/* Operations - Insert, Delete, Update, Display, Seacrh etc. */
/* Moreshwar M Dhaygude */
/* 04-Dec-2009, Fri, 4.00 PM */

#include <stdio.h>
#include <conio.h>

#define MAX 10

int count = 0; /* Global Declaration */

void insert(int *); /* Function Proto Types */
void display(int *);
int search(int *);
void reverse(int *);
void update(int *);
void delet(int *);


void main()
{
 int option;
 int a[MAX] = {0};
 do
 {
  clrscr();
  printf("\n\nArray Operations\n");
  printf("----- ----------\n\n");
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
    insert(a);
    break;
   case 2 :
    printf("Delete operation is selected...\n");
    getch();
    delet(a);
    break;
   case 3 :
    printf("Update operation is selected...\n");
    getch();
    update(a);
    break;
   case 4 :
    printf("Display operation is selected...\n");
    getch();
    display(a);
    break;
   case 5 :
    printf("Search operation is selected...\n");
    getch();
    search(a);
    break;
   case 6 :
    printf("Reverse operation is selected...\n");
    getch();
    reverse(a);
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
void insert(int *a)
{
 int pos = 0;
 int i, value;

 if (count == MAX)
 {
  printf("\nArray Overflow...an NOT insert...");
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
 for (i = count; i>=pos; i--)
 {
  a[i] = a[i-1];
 }
 a[i] = value;
 count++;
}

void display(int *a)
{
 int i;
 if (count == 0)
 {
  printf("Array is EMPTY...Nothing to display...");
  getch();
  return;
 }
 printf("\nTotal Count of Array Elements = %d\n", count);
 printf("Display of Array Elements -\n");
 printf("------- -- ----- --------\n\n");
 printf("Position\tElement Value\n");
 printf("--------\t-------------\n\n");
 for (i=0; i<count; i++)
 {
  printf("    %d\t\t%d\n", (i+1), a[i]);
 }
 getch();
}

int search(int *a)
{
 int value;
 int i;
 if (count == 0)
 {
  printf("Array is EMPTY...Nothing to search...");
  getch();
  return 0;
 }
 printf("\nEnter the value to search for in the array - ");
 flushall();
 scanf("%d",&value);
 for (i=0; i<count; i++)
 {
  if (a[i] == value)
  {
   printf("\nValue = %d Found at position = %d\n\n", value, (i+1));
   getch();
   return 1;
  }
 }
 printf("\nValue = %d NOT Found...\n\n", value);
 getch();
 return 0;
}

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