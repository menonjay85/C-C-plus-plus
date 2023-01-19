// Program to overload the binary plus operator for
// addition of two complex numbers WITHOUT USING FRIEND FUNCTION.
// File Name ----> PRCT_16A.CPP
// 24-Oct-2009, Saturday, 6.15 PM

#include <iostream.h>
#include <conio.h>

int count = 0; // Global variable for keeping count of objects constructed.

class complex
{
 float real;
 float imag;

 public :
 complex()  // Null Constructor
 {
  real = 0.0;
  imag = 0.0;
  count++;
 }

 complex(float x, float y) // Constructor using parameters.
 {
  real = x;
  imag = y;
  count++;
 }

 complex operator+(complex &); // Overload the binary plus + operator.

 void display() // Displaying values from the complex class object.
 {
  cout << "Complex Number = " << real << " + i" << imag << endl;
 }

 ~complex() // Destructor for the class ----> complex
 {
  cout << endl << "Serial Number of the complex object being destroyed = " << count-- << endl;
  getch();
 }

};

complex complex::operator+(complex &c)
{
 complex temp;
 temp.real = real + c.real;
 temp.imag = imag + c.imag;
 return (temp);
}

void main()
{
 clrscr();
 cout << "Overloading Binary Plus + Operator For Complex Number Addition -" << endl;
 cout << "----------- ------ ---- - -------- --- ------- ------ --------" << endl << endl;
 cout << "(Without using friend function)" << endl << endl;

 float x,y;
 cout << "Enter real part of first complex number ----> ";
 cin >> x;
 cout << "Enter imaginary part of first complex number ----> ";
 cin >> y;
 cout << endl << endl;
 complex c1(x,y); // Implicit Call To Constructor

 cout << "Enter real part of second complex number ----> ";
 cin >> x;
 cout << "Enter imaginary part of second complex number ----> ";
 cin >> y;
 complex c2 = complex(x,y); // Explicit Call To Constructor

 complex c3; // Null Constructor invoked without call

 c3 = c1 + c2;

 cout << "\n\n\n\nC3 = C1 + C2\n\nC1 ";
 c1.display();
 cout << "C2 ";
 c2.display();
 cout << "C3 ";
 c3.display();

 cout << endl << endl << "End of Program..." << endl;
 getch();
}

// End of Program ----> PRCT_16A.CPP