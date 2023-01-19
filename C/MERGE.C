/* Progrm to merge two arrays */
/* 01-Sep-2009, Tue, 10.30 AM */

#include <stdio.h>
#include <conio.h>

#define N1 5
#define N2 6


void main()
{
 int count1, count2, temp;
 int i, j, k;
 int even[N2], odd[N1], all[N1+N2];
 clrscr();
 printf("\n\nMerge Two Arrys :-\n");
 printf("----- --- -----\n\n");
 for (i=0; i<N1; i++)
  odd[i] = 0;
 for (i=0; i<N2; i++)
  even[i] = 0;
 for (i=0; i<(N1+N2); i++)
  all[i] =0;
 printf("Input a maximum of %d integers, Press 0 to exit - \n", (N1+N2));
 for (count1=0, count2=0, i=0; count1 < N1 && count2 < N2; i++)
 {
  printf("%d  -  ", (i+1));
  flushall();
  scanf("%d", &temp);
  if (temp == 0)
   break;
  if (temp%2==0)
  {
   if (count2 == 0)
    even[count2++] = temp;
   else if (temp <= even[0])
   {
    for (j=count2; j>0; j--)
     even[j] = even[j-1];
    even[0] = temp;
    count2++;
   }
   else if (temp >= even[count2-1])
    even[count2++] = temp;
    else
   {
    for(j=0; j<count2; j++)
     if (even[j] >= temp)
      break;
    for (k=count2; k>j; k--)
     even[k] = even[k-1];
    even[k] = temp;
    count2++;
   }
  }
  else
  {
   if (count1 == 0)
    odd[count1++] = temp;
   else if (temp <= odd[0])
   {
    for (j=count1; j>0; j--)
     odd[j] = odd[j-1];
    odd[0] = temp;
    count1++;
   }
   else if (temp >= odd[count1-1])
    odd[count1++] = temp;
   else
   {
    for(j=0; j<count1; j++)
     if (odd[j] >= temp)
      break;
    for (k=count1; k>j; k--)
     odd[k] = odd[k-1];
    odd[k] = temp;
    count1++;
   }
  }
 }
 if (count1 == N1)
 {
  printf("\n\nOdd array overflow...already input %d elements...", N1);
  getch();
 }
 if (count2 == N2)
 {
  printf("\n\nEven array overflow...already input %d elements...", N2);
  getch();
 }
/* Module to check for ascending order in the arrays to be merged */
 for(i=0; i<count1-1; i++)
 {
  if (odd[i]<=odd[i+1])
   continue;
  else
  {
   printf("\n\nArray of odd integers is NOT in ascending order...\n");
   printf("Fatal Error - Program abnomally terminated...\n\n");
   getch();
   exit(1);
  }
 }
 for(i=0; i<count2-1; i++)
 {
  if (even[i]<=even[i+1])
   continue;
  else
  {
   printf("\n\nArray of even integers is NOT in ascending order...\n");
   printf("Fatal Error - Program abnomally terminated...\n\n");
   getch();
   exit(1);
  }
 }
/* Merge Operations is coded here */
 if (odd[count1-1]<=even[0])
 {
  for (i=0,k=0; i<count1;)
   all[k++] = odd[i++];
  for (j=0; j<count2;)
   all[k++] = even[j++];
  }
 else if (even[count2-1]<=odd[0])
 {
  for (j=0,k=0; j<count2;)
   all[k++] = even[j++];
  for (i=0; i<count1;)
   all[k++] = odd[i++];
 }
 else
 {
  for (i=0,j=0,k=0; i<count1 && j<count2; ++k)
  {
   if (odd[i]<even[j])
    all[k] = odd[i++];
   else
    all[k] = even[j++];
  }
  for(;i<count1;)
   all[k++] = odd[i++];
  for(;j<count2;)
   all[k++] = even[j++];
 }
 printf("\n\nDump of odd numbers :-\n");
 for (i=0; i<count1; i++)
  printf("%d  ", odd[i]);
 printf("\n\nDump of even numbers :-\n");
 for (i=0; i<count2; i++)
  printf("%d  ", even[i]);
 printf("\n\nDump of all numbers :-\n");
 for (i=0; i<(count1+count2); i++)
  printf("%d  ", all[i]);
 getch();
}





