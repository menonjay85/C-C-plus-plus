// Program to overload the * operator for
// multiplication of two matrices.
// File Name ----> PRCT_04A.CPP
// 24-Oct-2009, Saturday, 12.30 PM

#include <iostream.h>
#include <conio.h>
#include <stdlib.h>

class matrix
{
 int **mat;
 int rows;
 int cols;

 public :
 matrix(int, int); // Constructor using DMA
 void set_elements(); // Setting values in the matrix.
 void display_elements(); // Displaying values from the matrix.
 matrix operator*(matrix &); // Overload the multiplication operator *
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

void matrix::set_elements() // Setting values in the matrix.
{
 int i, j, value;
 for (i=0; i<rows; i++)
 {
  for (j=0; j<cols; j++)
  {
   cout << "Row = " << (i+1) << ", Column = " << (j+1) << ", Element Value - ";
   cin >> value;
   mat[i][j] = value;
  }
  cout << "\n";
 }
}

void matrix::display_elements() // Displaying values from the matrix.
{
 int i,j;
 for (i=0; i<rows; i++)
 {
  for (j=0; j<cols; j++)
  {
   cout << mat[i][j] << "\t";
  }
  cout << "\n";
 }
}

matrix matrix::operator*(matrix &m) // Overload the multiplication operator *
{
 int i, j, k, sum;
 matrix temp(rows, m.cols); // Dynamically create a temporary matrix object.
 for (i=0; i<rows; i++)
 {
  for (j=0; j<m.cols; j++)
  {
   sum = 0;
   for (k=0; k<cols; k++)
   {
    sum = sum + ( (mat[i][k]) * (m.mat[k][j]) );
   }
  temp.mat[i][j] = sum;
  }
 }
 temp.display_elements(); // Display the output matrix contents.
 return (temp);
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
 cout << "Overloading * Operator For Matrix Multiplication -" << endl;
 cout << "----------- - -------- --- ------ --------------" << endl << endl;
 int m, n, o, p;
 cout << "Enter the number of rows of the first matrix - ";
 cin >> m;
 cout << "Enter the number of columns of the first matrix - ";
 cin >> n;
 cout << "Enter the number of rows of the second matrix - ";
 cin >> o;
 cout << "Enter the number of columns of the second matrix - ";
 cin >> p;
 if (n != o)
 {
  cout << "\n\n\nMatrices are NOT compatible for multiplication..." << endl;
  cout << "Columns of first matrix must be = Rows of second matrix..." << endl;
  cout << "Abnormal Program Termination..." << endl;
  getch();
  exit(1);
 }
 matrix mat1(m,n); // Dynamically creates the first matrix object.
 cout << "\n\n" << "Enter First Matrix Elements one by one -" << endl;
 mat1.set_elements();
 matrix mat2(o,p); // Dynamically creates the second matrix object.
 cout << "\n\n" << "Enter Second Matrix Elements one by one -" << endl;
 mat2.set_elements();

 clrscr();
 cout << "\n\n\n";
 cout << "Number of rows of the first matrix = " << m << endl;
 cout << "Number of columns of the first matrix = " << n << endl;
 cout << "\nDisplay of First Matrix Elements Entered By You -" << endl << endl;
 mat1.display_elements();
 cout << "\n\n\n";
 cout << "Number of rows of the second matrix = " << o << endl;
 cout << "Number of columns of the second matrix = " << p << endl;
 cout << "\nDisplay of Second Matrix Elements Entered By You -" << endl << endl;
 mat2.display_elements();

 matrix mat3(m,p);
 cout << "\n\n\n";
 cout << "Number of rows of the OUTPUT matrix = " << m << endl;
 cout << "Number of columns of the OUTPUT matrix = " << p << endl;
 cout << "\nDisplay of OUTPUT Matrix Elements ----> MAT3 = MAT1 * MAT2 " << endl << endl;
 mat3 = mat1 * mat2; // Multiply two matrices using oerator overloading

 cout << endl << endl << "End of Program..." << endl;
 getch();
}

// End of Program ----> PRCT_04A.CPP