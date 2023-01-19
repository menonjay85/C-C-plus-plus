/* String Storage in 1-D Character Arrays using SMA */
/* Moreshwar M Dhaygude */
/* 21-Nov-2009, Sat, 4.30 PM */

#include <stdio.h>
#include <conio.h>
#include <string.h>

#define MAX 30

void main()
{
 char name[MAX] = {'\0'};
 clrscr();
 printf("String Storage in 1-D Character Arrays using SMA\n");
 printf("------ --- --- -- --- --------- ------ ----- ---\n\n");
 printf("Enter the name of any student - ");
 flushall();
 scanf("%s", name);
 printf("\n\nLength of the input string = %d\n\n", strlen(name));
 printf("\n\nContents of Input String ----> %s\n\n", name);
 getch();
}
