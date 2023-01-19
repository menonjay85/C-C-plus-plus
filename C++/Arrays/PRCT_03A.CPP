// Program to create a two dimensional array to store
// a matrix using dynamic memory allocation.
// File Name ----> PRCT_03A.CPP
// 23-Oct-2009, Friday, 5.30 PM

#include <iostream.h>
#include <conio.h>

class matrix
{

 int **mat;
 int rows;
 int cols;

 public :
 matrix(int, int); // Constructor using DMA
 void set_element(int i, int j, int value) // Setting values in the matrix.
 {
  mat[i][j] = value;
 }
 int & display_element(int i, int j) // Displaying values from the matrix.
 {
  return mat[i][j];
 }
 ~matrix(); // Destructor for matrix class objects.
};

matrix::matrix(int r, int c)
{
 rows = r;
 cols = c;
 mat = new int *[rows]; // Dynamically creates an array of pointers for
			// each row of the matrix object.
 for (int i=0; i<rows; i++)
 {
  mat[i] = new int[cols]; // Dynamically creates each row having
			  // as many elements as many columns of the matrix.
 }
}

matrix::~matrix()
{
 for (int i=0; i<rows; i++)
 {
  delete mat[i]; // Destroys each row of the matrix.
 }
 delete mat; // Destroys the array of pointers for each of the rows.
}

void main()
{
 clrscr();
 cout << "Matrix Handling Using Dynamic Memory Allocation :-" << endl;
 cout << "------ -------- ----- ------- ------ ----------" << endl << endl;
 int m, n;
 cout << "Enter the number of rows of the matrix - ";
 cin >> m;
 cout << "Enter the number of columns of the matrix - ";
 cin >> n;
 matrix mat_obj(m,n); // Dynamically creates the matrix object.
 cout << "\n\n" << "Enter Matrix Elements one by one -" << endl;
 int i, j, value;
 for (i=0; i<m; i++)
 {
  for (j=0; j<n; j++)
  {
   cout << "Row = " << (i+1) << ", Column = " << (j+1) << ", Element Value - ";
   cin >> value;
   mat_obj.set_element(i, j, value);
  }
  cout << "\n";
 }
 clrscr();
 cout << "\n\n\n";
 cout << "Number of rows of the matrix = " << m << endl;
 cout << "Number of columns of the matrix = " << n << endl;
 cout << "\nDisplay of Matrix Elements Entered By You -" << endl << endl;
 for (i=0; i<m; i++)
 {
  for (j=0; j<n; j++)
  {
   cout << mat_obj.display_element(i,j) << "  ";
  }
  cout << "\n";
 }

 cout << endl << endl << "End of Program..." << endl;
 getch();
}

// End of Program ----> PRCT_03A.CPP