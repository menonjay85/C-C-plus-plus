/* Program to store strings using Dynamic Memory Allocation */
/* 06-Oct-2009, Tue, 11.00 Hrs */

#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <alloc.h>

#define NULL 0

void main()
{
 char **name = NULL;
 char *temp = NULL;
 int m, n;
 int i, length;
 clrscr();
 printf("\nString Handling using DMA\n");
 printf("------ -------- ----- ---\n\n");
 printf("\n\nEnter how many names to be stored dynamically - ");
 flushall();
 scanf("%d", &m);
 printf("\n\nEnter maximum size of any name - ");
 flushall();
 scanf("%d", &n);
 temp = (char *) malloc(n);
 if (temp==NULL)
 {
  printf("\nMemory NOT available...\n");
  printf("\nAbnormal Program Termination\n");
  getch();
  exit(1);
 }
/* Dynamic Creation of 2-D Arrays for Strings */
 for(i=0; i<m; i++)
 {
  printf("Enter name for serial number[%d] - ",(i+1));
  flushall();
  scanf("%s", temp);
  length = strlen(temp) + 1;
  name[i] = (char *) calloc(sizeof(char), length);
  if (name[i] == NULL)
  {
   printf("Memory allocation failed\n");
   printf("Serious Error - Abnormal Program Termination\n\n");
   getch();
   exit(1);
  }
  strcpy(name[i], temp);
 }
 free(temp);
 printf("\n\nProgram Output :-\n\n");
 for (i=0, length=0; i<m; i++)
 {
  length += strlen(name[i]);
  ++length;
  printf("%d - %s\n\n",(i+1), name[i]);
 }
 printf("\n\nPercentage of Saving in Memory = %f\n",((float)(m*n-length)/(m*n))*100);
 getch();
}
