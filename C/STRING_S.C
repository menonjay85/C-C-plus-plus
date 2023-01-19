/* Program to store strings using Static Memory Allocation */
/* 01-Oct-2009, Thu, 15.45 Hrs */

#include <stdio.h>
#include <conio.h>
#include <string.h>

#define MAXSIZE 30
#define MAXCOUNT 5

void main()
{
 char name[MAXCOUNT][MAXSIZE] = {'\0'};
 int i, length;
 clrscr();
 printf("\nString Handling using SMA\n");
 printf("------ -------- ----- ---\n\n");
 for (i=0,length=0; i<MAXCOUNT; i++)
 {
  printf("Enter name for roll number (%d) - ",(i+1));
  flushall();
  scanf("%s", name[i]);
  length += strlen(name[i]);
  ++length;
 }
 printf("\n\n\n");
 for (i=0; i<MAXCOUNT; i++)
 {
  printf("Roll Number (%d) - %s\n\n", (i+1), name[i]);
 }
 printf("\nTotal no of characters stored = %d\n",length);
 printf("Percentage Wastage of Memory = %f
\n",(((MAXCOUNT*MAXSIZE)-(float)length)/(MAXCOUNT*MAXSIZE))*100);
 getch();
}
