// Constructor for Dynamic Initialization & copy Constructor
// File Name ----> prct_11a.cpp
// 10-Nov-2009, Tue, 3.15 PM

#include <iostream.h>
#include <conio.h>

class time
{
  int hours;
  int minutes;
  int seconds;

  public :

  time() {}     // Null Constructor.

  time(int hh, int mm, int ss)     // Parameterized Constructor.
  {
   hours = hh;
   minutes = mm;
   seconds = ss;
   cout << "Dynamic Initialization Constructor Invoked..." << endl;
  }

  time(time &refobj)      // Copy Constructor.
  {
   hours = refobj.hours;
   minutes = refobj.minutes;
   seconds = refobj.seconds;
   cout << "Copy Constructor Invoked..." << endl;
  }

  void display()    // Member function to display class data members.
  {
   cout << endl;
   cout << "Hours = " << hours << endl;
   cout << "Minutes = " << minutes << endl;
   cout << "Seconds = " << seconds << endl;
  }

};

void main()
{
 int h, m, s;
 clrscr();
 cout << "Use of Dynamic Initialization And Copy Constructors :- " << endl;
 cout << "--- -- ------- -------------- --- ---- ------------" << endl << endl;
 cout << "Enter Hours - ";
 cin >> h;
 cout << "Enter Minutes - ";
 cin >> m;
 cout << "Enter Seconds - ";
 cin >> s;

 cout << endl << endl;
 cout << "For obj1 ----> ";
 time obj1(h, m, s);     // Parametrized Constructor called.

 cout << endl << endl;
 cout << "For obj2 ----> ";
 time obj2(obj1);        // Copy Constructor called.

 cout << endl << endl;
 cout << "For obj3 ----> ";
 time obj3 = obj1;       // Copy Constructor called again.

 cout << endl << endl;
 cout << "For obj4 ----> Constructor NOT Invoked...";
 time obj4;              // Object created but NOT initialized.
 obj4 = obj3;            // Copy Constuctor NOT called.
			 // Object initialized using inbuilt
			 // operator overloading for =

 cout << endl << endl;
 cout << endl << endl;
 cout << "Display of time Object ----> obj1" << endl;
 obj1.display();
 cout << endl << endl;
 cout << "Display of time Object ----> obj2" << endl;
 obj2.display();
 cout << endl << endl;
 cout << "Display of time Object ----> obj3" << endl;
 obj3.display();
 cout << endl << endl;
 cout << "Display of time Object ----> obj4" << endl;
 obj4.display();

 cout << endl << endl;
 cout << "Program Finished...";
 getch();
}

// End of Program ----> PRCT_11A.CPP