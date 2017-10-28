/*
  This program prints following pattern:
  *
  **
  ***
*/

/*
Correction :
It is not advisable to use goto statement in C++ because it breaks the usual flow of program.
We can use loops and conditional statements to check it.
*/

#include <iostream>
using namespace std;

int main() {
  int nRows;

  cout << "Enter number of rows you want to print: ";
  cin >> nRows;
  while(nRows < 0){
    cout << "Oops..Enter a positive number..!\n";
    cout << "Enter Again: ";
    cin >> nRows;
  }

  for (int i=1; i<=nRows; i++) {
    for (int j=1; j<=i; j++) {
        cout << "*";
    }
    cout << "\n";
  }

  return 0;
}
