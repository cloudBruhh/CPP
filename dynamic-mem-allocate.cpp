#include <cstdlib>
#include <iostream>
using namespace std;

int main() {

  int *ptr_int = new int;
  char *ptr_char = new char;

  *ptr_int = 10;
  *ptr_char = 'a';

  cout << "Value of ptr_int: " << *ptr_int << endl;
  cout << "Value of ptr_char: " << *ptr_char << endl;

  return 0;
}
