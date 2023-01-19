/* Program Using Structures */
/* 05-Nov-2009, The, 3.00 PM */

#include <stdio.h>
#include <conio.h>
#include <string.h>
#define MAX 5

struct student
{
  int roll_no;
  char name[30];
  int tot_mrks;
};

void main()
{
 int temp;
 float avg_mrks;
 int i;
 struct student s[MAX];
 float x;
 clrscr();
 printf("Program Using Array of Structures :-\n");
 printf("------- ----- ----- -- ----------\n\n");
 for (i=0; i<MAX; i++)
 {
  printf("Enter Data For Student with Sr No %d -\n\n", (i+1));
  printf("Enter Roll No - ");
  flushall();
  scanf("%d", &s[i].roll_no);
  printf("Enter Name - ");
  flushall();
  scanf("%s", &s[i].name);
  printf("Enter Total Marks - ");
  flushall();
  scanf("%d", &s[i].tot_mrks);
  printf("\n");
 }
 clrscr();
 printf("Data Of %d Students -\n\n", MAX);
 temp = 0;
 for (i=0; i<MAX; i++)
 {
  printf("Serial No of the Student - %d\n", (i+1));
  printf("Roll No - %d\n", s[i].roll_no);
  printf("Name - %s\n", s[i].name);
  printf("Total Marks - %d\n\n", s[i].tot_mrks);
  temp += s[i].tot_mrks;
 }
 avg_mrks = (float)temp/MAX;
 printf("Average of Total Marks for %d Students = %f\n\n", MAX, avg_mrks);

 printf("\n\nEnd of Program...\n");
 getch();
}
