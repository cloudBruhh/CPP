#include <cstdlib>
#include <iostream>
using namespace std;

const int SIZE = 5;
int main() {
  int *ptr_int = new int[SIZE];
  char *ptr_char = new char[SIZE];

  for (int i = 0; i < SIZE; i++) {
    ptr_int[i] = i + 1;
    ptr_char[i] = 'a' + i;
  }

  // 1. Print all integer values first
  for (int i = 0; i < SIZE; i++) {
    cout << "Values of ptr_int[" << i << "]: " << ptr_int[i] << endl;
  }

  // 2. Insert the asterisk padding block between the two sets of data
  cout.width(40); // Sets the width of the padding row
  cout.fill('*');
  cout << "" << endl; // Prints a blank string padded out with asterisks

  // 3. Print all character values last
  for (int i = 0; i < SIZE; i++) {
    cout << "Values of ptr_char[" << i << "]: " << ptr_char[i] << endl;
  }
  return 0;
}
