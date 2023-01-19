// Program to search a given set of numbers using Sequential Search Algorithm.
// File Name ----> PRCT_14A.CPP
// 24-Nov-2009, Tuesday, 6.45 PM

#include <iostream.h>
#include <conio.h>
#define MAX 10

class data
{
 int number[MAX];

 public :
 data(); 	// Null Constructor.

 void input();  // Inputting values from the user for the array.

 void search();  // Sequential Search.

 void display(); // Displaying values from the array.

};

data::data()
{
 for (int i=0; i<MAX; i++)
  number[i] = 0;
}

void data::input()
{
 cout << "Input of Array Elements - " << endl;
 cout << "-----------------------"  << endl << endl;
 cout << "Sr No         Value" << endl;
 cout << "------      ---------" << endl;
 for (int i=0; i<MAX; i++)
 {
  cout << "   " << (i+1) << "  ---->  ";
  cin >> number[i];
 }
}

void data::search()
{
 int x;
 int i;
 cout << endl << endl;
 cout << "Enter a value to search from the array - ";
 cin >> x;
 for (i=0; i<MAX; i++)
  if (number[i]==x)
   break;
 cout << endl << endl;
 if (i<MAX)
 {
  cout << "Search Successful...Located at position " << (i+1) << " in the array." << endl;
 }
 else
 {
  cout << "Search Unsuccessful..." << endl;
 }
}

void data::display()
{
 cout << endl << endl;
 cout << "Display of Array Contents - " << endl;
 cout << "-------------------------"  << endl << endl;
 cout << "Sr No         Value" << endl;
 cout << "------      ---------" << endl;
 for (int i=0; i<MAX; i++)
  cout << "   " << (i+1) << "  ---->  " << number[i] << endl;
}

void main()
{
 clrscr();
 cout << "Searching of Array Elements Using Sequential Search -" << endl;
 cout << "--------- -- ----- -------- ----- ---------- ------" << endl << endl;

 data obj;
 obj.input();
 cout << endl << endl << endl;
 obj.display();
 obj.search();

 cout << endl << endl << "End of Program..." << endl;
 getch();
}

// End of Program ----> PRCT_14A.CPP