// Program to overload the - unary minus operator for
// class that stores an integer.
// File Name ----> PRCT_18A.CPP
// 24-Oct-2009, Saturday, 5.45 PM

#include <iostream.h>
#include <conio.h>

int count = 0; // Global variable for keeping count of objects constructed.

class integer
{
 int number;

 public :
 integer(int n) // Constructor using parameters.
 {
  number = n;
  count++;
 }
 void operator-(); // Overload the - unary minus operator.

 void display() // Displaying values from the integer class object.
 {
  cout << "Number = " << number << endl;
 }

 ~integer() // Destructor for the class ----> integer
 {
  cout << endl << "Serial Number of the integer object being destroyed = " << count-- << endl;
  getch();
 }

};

void integer::operator-()
{
 number = -number;
}

void main()
{
 clrscr();
 cout << "Overloading - Unary Minus Operator For An Integer Class Object -" << endl;
 cout << "----------- - ----- ----- -------- --- -- ------- ----- ------" << endl << endl;
 int m;
 cout << "Enter any integer to be stored in the class integer ----> ";
 cin >> m;
 cout << endl << endl;

 integer obj(m);

 -obj;
 cout << "After Applying Unary Minus - Operator ----> ";
 obj.display();
 -obj;
 cout << "After Re-applying Unary Minus - Operator ----> ";
 obj.display();

 cout << endl << endl << "End of Program..." << endl;
 getch();
}

// End of Program ----> PRCT_18A.CPP