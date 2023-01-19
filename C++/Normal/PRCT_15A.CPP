// Enter Marks for five students and find average marks.
// File Name ----> prct_15a.cpp
// 10-Nov-2009, Tue, 6.00 PM

#include <iostream.h>
#include <conio.h>
#include <string.h>

class student
{
  int roll_no;
  char name[30];
  int total_marks;

  public :

  student() { }    // Null Constructor

  student(int, char *, int);     // Parameterized Constructor.
  void display();    // Member function to display class data members.
  int get_marks();   // Member function to get marks.

};

student::student(int r, char *ptr, int m)
{
 roll_no = r;
 strcpy(name, ptr);
 total_marks = m;
}

void student::display()
{
 cout << "Roll Number ----> " << roll_no << endl;
 cout << "Full Name ------> " << name << endl;
 cout << "Total Marks ----> " << total_marks << endl;
}

int student::get_marks()
{
 return (total_marks);
}

void main()
{
 int i, r, m, sum, count;
 float average;
 char temp[30];

 clrscr();
 cout << "Enter Marks of Five Students and Find Average :- " << endl;
 cout << "----- ----- -- ---- -------- --- ---- -------" << endl << endl;

 student s[5];

 cout << "Input Data for Each Student - " << endl << endl;
 for (i=0; i<5; i++)
 {
  cout << "Serial No = " << (i+1) << endl;
  cout << "Roll Number - ";
  cin >> r;
  cout << "Full Name - ";
  cin >> temp;
  cout << "Total Marks - ";
  cin >> m;
  s[i] = student(r, temp, m);
  cout << endl << endl;
 }


 cout << "Display of Data for Each Student - " << endl << endl;
 for (i=0, sum=0, count=0; i<5; i++)
 {
  cout << "Serial No = " << (i+1) << endl;
  s[i].display();
  sum += s[i].get_marks();
  count++;
  cout << endl << endl;
 }

 cout << endl << endl;
 cout << endl << endl;
 cout << "No of Students = " << count << endl;
 cout << "Grand Total of Marks = " << sum << endl;
 cout << "Average Marks = " << (float(sum)/float(count)) << endl;


 cout << endl << endl;
 cout << "Program Finished...";
 getch();
}

// End of Program ----> PRCT_15A.CPP