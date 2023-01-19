// Constructor for DMA of 1D arrays with
// Initialization of array elements from interactive keyboard input.
// File Name ----> prct_12a.cpp
// 10-Nov-2009, Tue, 4.15 PM

#include <iostream.h>
#include <conio.h>

class array_1d
{
  int *ptr;
  int n;

  public :

  array_1d(int);           // DMA Constructor for 1D array.
  void set_elements();     // Setting values in the array.
  void display_elements(); // Displaying values from the array.
  ~array_1d();             // Destructor for array class objects.

};

array_1d::array_1d(int size)
{
 n = size;
 ptr = new int[n];        // Dynamically creates the 1D array.
}                         // with specified size.

void array_1d::set_elements() // Setting values in the array.
{
 int i, value;
 for (i=0; i<n; i++)
 {
   cout << "Element No = " << (i+1) << ", Element Value ----> ";
   cin >> value;
   cout << endl;
   ptr[i] = value;
 }
}

void array_1d::display_elements() // Displaying values from the array.
{
 int i;
 cout << "Size of 1D Array ----> " << n << endl << endl;
 cout << "Base Address of 1D Array ----> " << ptr << endl << endl;
 for (i=0; i<n; i++)
 {
   cout << ptr[i] << "\t";
 }
}

array_1d::~array_1d()
{
 delete ptr; // Destroys the 1D array.
 cout << endl << endl << "Destructor Invoked..." << endl << endl;
 getch();
}

void main()
{
 clrscr();
 cout << "Use of DMA & Parameterized Constructors for 1D Array :- " << endl;
 cout << "--- -- --- - ------------- ------------ --- -- -----" << endl << endl;

 int m;
 cout << "Enter the size of the 1D Array to be dynamically created - ";
 cin >> m;

 array_1d obj(m);  // Dynamic Construction of 1D array of size m elements.

 cout << endl << endl;
 cout << endl << "Input elements in the array one by one -" << endl << endl;
 obj.set_elements();

 cout << endl << endl;
 cout << endl << "Display of details of the array -" << endl << endl;
 obj.display_elements();

 cout << endl << endl;
 cout << endl << endl;
 cout << "Program Finished...";
 getch();
}

// End of Program ----> PRCT_12A.CPP