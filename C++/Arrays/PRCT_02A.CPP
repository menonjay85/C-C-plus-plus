// Program to create a character array to store
// a string using dynamic memory allocation.
// Function is coded to concatenate two strings.
// File Name ----> PRCT_02A.CPP
// 23-Oct-2009, Friday, 3.15 PM

#include <iostream.h>
#include <conio.h>
#include <string.h>

class string
{

 char *name;
 int len;

 public :
 string() // Null Constructor.
 {
  len = 0;
  name = new char[len+1]; // Dynamic Allocation
 }
 string (char *s) // Constructor with parameter.
 {
  len = strlen(s);
  name = new char[len+1]; // Dynamic Allocation
  strcpy(name,s);
 }
 void join(string &, string &); // String Concatenation.
 void display()
 {
  cout << "\n" << "String Contents = " << name << endl;
  cout << "Length of String = " << len << endl << endl;
 }
 ~string()
 {
  delete name;
 }
};

void string::join(string &a, string &b)
{
 len = a.len + b.len;
 delete name;
 name = new char[len+1]; // Dynamic Allocation.
 strcpy(name, a.name);
 strcat(name, b.name);
}

void main()
{
 clrscr();
 cout << "String Handling Using Dynamic Memory Allocation :-" << endl;
 cout << "------ -------- ----- ------- ------ ----------" << endl << endl;
 char *first = "Mohandas ";
 char *second = "Karamchand ";
 char *third = "Gandhi";
 string name1(first);
 cout << "\n\nContents of string object ----> name1";
 name1.display();
 cout << "\n\nContents of string object ----> name2";
 string name2(second);
 name2.display();
 cout << "\n\nContents of string object ----> name3";
 string name3(third);
 name3.display();
 string s1;
 string s2;
 s1.join(name1, name2);
 s2.join(s1, name3);
 cout << "\n\nContents of string object ----> s1 = name1 + name2";
 s1.display();
 cout << "\n\nContents of string object ----> s2 = s1 + name3";
 s2.display();
 cout << endl << endl << "End of Program..." << endl;
 getch();
}

// End of Program ----> PRCT_02A.CPP