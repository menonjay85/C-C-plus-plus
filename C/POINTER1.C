/* Pointer Arithmetic */
/* 03-Nov-2009, Tue, 10.15 Am */

#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
 int *iptr1;
 int *iptr2;
 float *fptr;
 double *dptr;
 long double *ldptr;
 char *cptr;
 float x = 11.11;
 double y = 22.22;
 long double z = 33.33;
 int m = 111;
 int n = 222;
 int i;
 unsigned short int usi = 0;
 clrscr();
 printf("\nPointer Arithmetic :- \n");
 printf("------- ----------\n\n");
 iptr1 = &m;
 iptr2 = &n;
 fptr = &x;
 dptr = &y;
 ldptr = &z;
 strcpy(cptr, "SIESCOMS");
 printf("Address stored in iptr1 = %u\n", iptr1);
 printf("Value stored at Address %u = %d\n", iptr1, (*iptr1));
 printf("Address stored in iptr2 = %u\n", iptr2);
 printf("Value stored at Address %u = %d\n", iptr2, (*iptr2));
 printf("Address stored in fptr = %u\n", fptr);
 printf("Value stored at Address %u = %f\n", fptr, (*fptr));
 printf("Address stored in dptr = %u\n", dptr);
 printf("Value stored at Address %u = %lf\n", dptr, (*dptr));
 printf("Address stored in ldptr = %u\n", ldptr);
 printf("Value stored at Address %u = %Lf\n", ldptr, (*ldptr));
 printf("Address stored in cptr = %u\n", cptr);
 printf("Value stored at Address %u = %s\n", cptr, cptr);
 getch();

 clrscr();
 printf("\nUsing ++ operator on pointer variables\n\n");

 printf("Address stored in iptr1 = %u\n", iptr1);
 printf("Value stored at Address %u = %d\n", iptr1, (*iptr1));
 iptr1++;
 printf("Address stored in iptr1 = %u\n", iptr1);
 printf("Value stored at Address %u = %d\n", iptr1, (*iptr1));
 iptr1++;
 printf("Address stored in iptr1 = %u\n", iptr1);
 printf("Value stored at Address %u = %d\n", iptr1, (*iptr1));
 iptr1++;
 printf("Address stored in iptr1 = %u\n", iptr1);
 printf("Value stored at Address %u = %d\n", iptr1, (*iptr1));
 printf("\n\n");
 printf("Address stored in iptr2 = %u\n", iptr2);
 printf("Value stored at Address %u = %d\n", iptr2, (*iptr2));
 iptr2++;
 printf("Address stored in iptr2 = %u\n", iptr2);
 printf("Value stored at Address %u = %d\n", iptr2, (*iptr2));
 iptr2++;
 printf("Address stored in iptr2 = %u\n", iptr2);
 printf("Value stored at Address %u = %d\n", iptr2, (*iptr2));
 iptr2++;
 printf("Address stored in iptr2 = %u\n", iptr2);
 printf("Value stored at Address %u = %d\n", iptr2, (*iptr2));
 printf("\n\n");
 printf("Address stored in fptr = %u\n", fptr);
 printf("Value stored at Address %u = %f\n", fptr, (*fptr));
 fptr++;
 printf("Address stored in fptr = %u\n", fptr);
 printf("Value stored at Address %u = %f\n", fptr, (*fptr));
 fptr++;
 printf("Address stored in fptr = %u\n", fptr);
 printf("Value stored at Address %u = %f\n", fptr, (*fptr));
 fptr++;
 printf("Address stored in fptr = %u\n", fptr);
 printf("Value stored at Address %u = %f\n", fptr, (*fptr));
 printf("\n\n");

 printf("Address stored in dptr = %u\n", dptr);
 printf("Value stored at Address %u = %lf\n", dptr, (*dptr));
 dptr++;
 printf("Address stored in dptr = %u\n", dptr);
 printf("\n\n");

 printf("Address stored in ldptr = %u\n", ldptr);
 printf("Value stored at Address %u = %Lf\n", ldptr, (*ldptr));
 ++ldptr;
 printf("Address stored in ldptr = %u\n", ldptr);
 ldptr = ldptr + 2;
 printf("Address stored in ldptr = %u\n", ldptr);
 ldptr = ldptr - 2;
 printf("Address stored in ldptr = %u\n", ldptr);
 ldptr--;
 printf("Address stored in ldptr = %u\n", ldptr);
 printf("\n\n");

 printf("Address stored in cptr = %u\n", cptr);
 printf("Value stored at Address %u = %s\n", cptr, cptr);
 cptr++;
 printf("Address stored in cptr = %u\n", cptr);
 printf("Value stored at Address %u = %s\n", cptr, cptr);
 cptr++;
 printf("Address stored in cptr = %u\n", cptr);
 printf("Value stored at Address %u = %s\n", cptr, cptr);
 cptr++;
 printf("Address stored in cptr = %u\n", cptr);
 printf("Value stored at Address %u = %s\n", cptr, cptr);
 printf("\n\n");

 iptr1 = &m;
 iptr2 = &n;
 printf("Address stored in iptr1 = %u\n", iptr1);
 printf("Address stored in iptr2 = %u\n", iptr2);
 iptr1 += 5;
 printf("Address stored in iptr1 = %u\n", iptr1);
 printf("Subtraction of iptr1 - iptr2 = %d\n", (iptr1-iptr2));

 getch();

 clrscr();
 printf("\nASCII Chart :- \n");
 printf("----- -----\n\n");
 for (i=0; i<=255; i++, usi++)
 {
  printf("%d ----> %c\n", usi, usi);
  if ((i%20 == 0) & (i > 0) )
  {
   getch();
  }
 }
 getch();

 printf("\n\nEnd of Program...\n");
 getch();
}
