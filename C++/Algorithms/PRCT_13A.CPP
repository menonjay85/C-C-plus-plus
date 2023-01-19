// Program to sort a given set of numbers using Bubble Sort Algorithm.
// File Name ----> PRCT_13A.CPP
// 24-Nov-2009, Tuesday, 4.45 PM

#include <iostream.h>
#include <conio.h>
#define MAX 10

class data
{
 int number[MAX];

 public :
 data(); 	// Null Constructor.

 void input();  // Inputting values from the user for the array.

 void bubble();  // Sorting the input nos using Bubble Sort.

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

void data::bubble()
{
 int count=1;
 int i, j, temp;
 for(i=1; (i<MAX && count>0); i++)
 {
  count=0;
  for (j=0; j<(MAX-i); j++)
  {
   if (number[j] > number[j+1])
   {
    temp = number[j];
    number[j] = number[j+1];
    number[j+1] = temp;
    count++;
   }
  }
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
 cout << "Sorting of Array Elements Using Bubble Sort -" << endl;
 cout << "------- -- ----- -------- ----- ------ -----" << endl << endl;

 data obj;
 obj.input();
 cout << endl << endl << endl;
 cout << "Data Before Sorting - " << endl;
 cout << "-------------------" << endl << endl;
 obj.display();
 obj.bubble();
 cout << endl << endl << endl;
 cout << "Data After Sorting - " << endl;
 cout << "------------------" << endl << endl;
 obj.display();

 cout << endl << endl << "End of Program..." << endl;
 getch();
}

// End of Program ----> PRCT_13A.CPP