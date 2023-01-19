// Program to achieve data conversion from source class to destination class.
// Uses constructor in destination class.
// File Name ----> PRCT_07B.CPP
// 02-Nov-2009, Tuesday, 7.00 PM

#include <iostream.h>
#include <conio.h>

class srce
{

 int stk_code;
 int stk_qty;
 float stk_prce;

 public :
 srce(int a, int b, float c) // Parameterized Constructor
 {
  stk_code = a;
  stk_qty = b;
  stk_prce = c;
 }

 void display()
 {
  cout << "Source Class Data :-" << endl;
  cout << "Stock Code = " << stk_code << endl;
  cout << "Stock Quantity = " << stk_qty << endl;
  cout << "Stock Unit Price = " << stk_prce << endl;
 }

 int getcode()
 {
  return (stk_code);
 }

 int getqty()
 {
  return (stk_qty);
 }

 float getprce()
 {
  return (stk_prce);
 }

 operator float()  // Convertrs data from class to basic float type
		   // using operator function in source class.
 {
  return (stk_qty*stk_prce);
 }

}; // End of Source Class.

class dstn
{

 int itm_code;
 float itm_amt;

 public :
 dstn() // Null Constructor
 {
  itm_code = 0;
  itm_amt = 0.0;
 }

 void display()
 {
  cout << "Destination Class Data :-" << endl;
  cout << "Stock Code = " << itm_code << endl;
  cout << "Stock Amount (Rs.) = " << itm_amt << endl;
 }

 dstn(srce tmp_obj)
 {
  itm_code = tmp_obj.getcode();
  itm_amt = tmp_obj.getqty() * tmp_obj.getprce();
 }

};  // End of Destination class.

void main()
{
 clrscr();
 cout << "Data Conversion Using Constructor Function in Destination Class :-" << endl;
 cout << "---- ---------- ----- ----------- -------- -- ----------- -----" << endl << endl;

 srce s_obj(11, 22, 33.33); // Object Created from Source Class.
 dstn d_obj;                 // Object created from destnation class.
 float tot_amt;

 // Class to basic Data Conversion.
 tot_amt = s_obj;

 // Source Class to Destination Class.
 d_obj = s_obj;

 s_obj.display();
 cout << endl << endl;

 d_obj.display();
 cout << endl << endl;

 cout << "Stock Amount (Rs.) = " << tot_amt << endl;

 cout << endl << endl << "End of Program..." << endl;
 getch();
}

// End of Program ----> PRCT_07B.CPP