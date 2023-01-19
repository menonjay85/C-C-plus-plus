// Program to overload the ++ increment operator for
// class that stores time in hours, minutes and seconds.
// File Name ----> PRCT_05A.CPP
// 24-Oct-2009, Saturday, 4.30 PM

#include <iostream.h>
#include <conio.h>

int count = 0; // Global variable for keeping track of count.

class time
{
 int hours;
 int minutes;
 int seconds;

 public :
 time(int hh, int mm, int ss) // Constructor using parameters.
 {
  hours = hh;
  minutes = mm;
  seconds = ss;
  count++;
 }
 void operator++(); // Overload the increment ++ unary operator.

 void display() // Displaying values from the time object.
 {
  cout << "Hours = " << hours << ", Minutes = " << minutes << ", Seconds = " << seconds << endl;
 }

 ~time() // Destructor for the class ----> time
 {
  cout << endl << "Serial Number of the time object being destroyed = " << count-- << endl;
  getch();
 }

};

void time::operator++()
{
 seconds = seconds + 1;
 minutes = minutes + (seconds/60);
 seconds = seconds % 60;
 hours = hours + (minutes/60);
 minutes = minutes % 60;
}

void main()
{
 clrscr();
 cout << "Overloading ++ Unary Operator For Incrementing Time by 1 Second -" << endl;
 cout << "----------- -- ----- -------- --- ------------ ---- -- - ------" << endl << endl;
 int h, m, s;
 cout << "Enter Hours for Time Class Object - ";
 cin >> h;
 cout << "Enter Minutes for Time Class Object - ";
 cin >> m;
 cout << "Enter Seconds for Time Class Object - ";
 cin >> s;
 cout << endl << endl;

 time obj = time(h, m, s);

 for (int i=1; i<=100; i++)
 {
  ++obj;
  cout << "Incrementing by 1 second ----> ";
  obj.display();
  if (i%20==0)
   getch();
 }
 cout << endl << endl << "End of Program..." << endl;
 getch();
}

// End of Program ----> PRCT_05A.CPP