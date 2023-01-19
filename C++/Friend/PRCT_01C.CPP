// Program to swap private data members
// of two different classes WITHOUT USING FRIEND FUNCTION.
// File Name ----> PRCT_01C.CPP
// 23-Oct-2009, Friday, 2.15 PM

#include <iostream.h>
#include <conio.h>

class first
{

 int m;

 public :
 void setdata(int a) // member function to input data member values.
 {
  m = a;
 }
 void display() // member function to display data member values.
 {
  cout << "Value of data member m from class first = " << m << endl << endl;
 }
 int getdata() // member function to get data value.
 {
  return (m);
 }
};

class second
{

 int n;

 public :
 void setdata(int b) // member function to input data member values.
 {
  n = b;
 }
 void display() // member function to display data member values.
 {
  cout << "Value of data member n from class second = " << n << endl << endl;
 }
 int getdata() // member function to get data value.
 {
  return (n);
 }
};

void main()
{
 first obj_1;
 second obj_2;
 int temp;
 obj_1.setdata(111);
 obj_2.setdata(222);
 clrscr();
 cout << "Swap Private Data Members Of Two Classes Without Using Friend Function :-" << endl;
 cout << "---- ------- ---- ------- -- --- ------- ------- ----- ------ --------" << endl << endl;
 cout << "Status Before Swapping :-" << endl;
 cout << "------ ------ --------" << endl << endl;
 obj_1.display();
 obj_2.display();
 temp = obj_1.getdata();
 obj_1.setdata(obj_2.getdata());
 obj_2.setdata(temp);
 cout << endl;
 cout << "Status After Swapping :-" << endl;
 cout << "------ ----- --------" << endl << endl;
 obj_1.display();
 obj_2.display();
 cout << endl << endl << "End of Program..." << endl;
 getch();
}

// End of Program ----> PRCT_01C.CPP