/* String Storage in 1-D Character Arrays using DMA */
/* Moreshwar M Dhaygude */
/* 21-Nov-2009, Sat, 4.50 PM */

#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <alloc.h>
#include <stdlib.h>

#define MAX 30

void main()
{
 char *name = NULL;
 char temp[MAX] = {'\0'};
 int len = 0;
 clrscr();
 printf("String Storage in 1-D Character Arrays using DMA\n");
 printf("------ --- --- -- --- --------- ------ ----- ---\n\n");
 printf("Enter the name of any student - ");
 flushall();
 scanf("%s", temp);
 len = strlen(temp) + 1;
 name = (char *) calloc(sizeof(char), len);
 if (name == NULL)
 {
  printf("\n\nDMA failed...Abnormal Program Termination...\n");
  getch();
  exit(1);
 }
 strcpy(name, temp);
 free(temp);
 printf("\n\nLength of the input string = %d\n\n", strlen(name));
 printf("\n\nContents of Input String ----> %s\n\n", name);
 getch();
}
