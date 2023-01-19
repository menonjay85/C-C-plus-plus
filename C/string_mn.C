/* Program to perform string operations without using library functions */
/* strlen(), strcpy(), strcat(), strcmp() */
/* 17-Sep-2009, Thu, 3.00 pm */

#include <stdio.h>
#include <conio.h>
#include <string.h>
#define MAX1 100
#define MAX2 150
#define MAX 249

void main()
{
 char name1[MAX1] = "CCCCCCCCCC";
 char name2[MAX2] = {'\0'};
 char name[MAX] = {'\0'};
 int length1;
 int length2;
 int length;
 int i, j;
 int diff;
/* Implmentation of strlen function */
 for (i=0, length1=0; i<MAX1; i++)
  if (name1[i] == '\0')
   break;
  else
   ++length1;

 clrscr();
 printf("\n\nLength of String name1 = %d\n\n", length1);
 getch();
 for (i=0; i<=length1; i++)
 {
  if (i%22==0)
  {
   getch();
   clrscr();
   printf("\nSr No\tCharacter\tASCII Value\n");
   printf("-----\t---------\t-----------\n\n");
  }
  printf("   %d\t    %c\t\t%d\n",i+1, name1[i], name1[i]);
 }
 getch();
 clrscr();

/* Implementation of strcpy function */
 if (MAX2 < MAX1)
 {
  printf("\n\nIncompatible for copy operations...\n");
  printf("Destination string length(%d) is less than soruce string length(%d)...\n", MAX2, MAX1);
  getch();
  exit(0);
 }
 for (i=0; i<=length1; i++)
  name2[i] = name1[i];

/* Reset name2 to a different string */
 for (i=0; i<10; i++)
  name2[i] = 'B';
 name2[i] = '\0';

/* Implmentation of strlen function */
 for (i=0, length2=0; i<100; i++)
  if (name2[i] == '\0')
   break;
  else
   ++length2;

 printf("\n\nLength of String name2 = %d\n\n", length2);
 getch();
 getch();
 for (i=0; i<=length2; i++)
 {
  if (i%22==0)
  {
   getch();
   clrscr();
   printf("\nSr No\tCharacter\tASCII Value\n");
   printf("-----\t---------\t-----------\n\n");
  }
  printf("   %d\t    %c\t\t%d\n",i+1, name2[i], name2[i]);
 }
 getch();


/* Implementation of strcat function */
 if (MAX < (MAX1+MAX2-1))
 {
  printf("\n\nIncompatible for concatenation operations...\n");
  printf("Destination string length(%d) is less than soruce string length(%d)...\n", MAX, (MAX1+MAX2-1));
  getch();
  exit(0);
 }
 for (i=0; i<length1; i++)
  name[i] = name1[i];
 for (j=0; j<=length2; j++)
  name[i++] = name2[j];

 for (i=0, length=0; i<MAX; i++)
  if (name[i] == '\0')
   break;
  else
   ++length;

 clrscr();
 printf("\n\nLength of String name = %d\n\n", length);
 getch();
 for (i=0; i<=length; i++)
 {
  if (i%22==0)
  {
   getch();
   clrscr();
   printf("\nSr No\tCharacter\tASCII Value\n");
   printf("-----\t---------\t-----------\n\n");
  }
  printf("   %d\t    %c\t\t%d\n",i+1, name[i], name[i]);
 }
 getch();

/* Implementation of strcmp function */
 printf("\n\nComparing name1 and name2...\n\n");
 for (i=0, j=0, diff=0; i<length1 && j<length2; i++, j++)
 {
  if (name1[i]==name2[j])
   continue;
  else
  {
   diff = name1[i]-name2[j];
   break;
  }
 }
 if (diff==0 && i==length1 && j==length2)
 {
  printf("\n\nStrings are equal...\n\n");
  getch();
 }
 else if (diff==0 && i==length1)
  diff=0-name2[j];
 else if (diff==0 && j==length2)
  diff=name1[i]-0;
 printf("\n\nValue of diff = %d\n\n", diff);
 getch();


/* Implementation of strcmp function */
 printf("\n\nComparing name and name1...\n\n");
 for (i=0, j=0, diff=0; i<length && j<length1; i++, j++)
 {
  if (name[i]==name1[j])
   continue;
  else
  {
   diff = name[i]-name1[j];
   break;
  }
 }
 if (diff==0 && i==length && j==length1)
 {
  printf("\n\nStrings are equal...\n\n");
  getch();
 }
 else if (diff==0 && i==length)
  diff=0-name1[j];
 else if (diff==0 && j==length1)
  diff=name[i]-0;
 printf("\n\nValue of diff = %d\n\n", diff);
 getch();

/* Implementation of strcmp function */
 printf("\n\nComapring name2 and name...\n");
 for (i=0, j=0, diff=0; i<length2 && j<length; i++, j++)
 {
  if (name2[i]==name[j])
   continue;
  else
  {
   diff = name2[i]-name[j];
   break;
  }
 }
 if (diff==0 && i==length2 && j==length)
 {
  printf("\n\nStrings are equal...\n\n");
  getch();
 }
 else if (diff==0 && i==length2)
  diff=0-name[j];
 else if (diff==0 && j==length2)
  diff=name2[i]-0;
 printf("\n\nValue of diff = %d\n\n", diff);
 getch();

 clrscr();
 printf("\nProgram Finished...\n\n");
 getch();
}