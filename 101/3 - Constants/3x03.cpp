#include <iostream>
using namespace std;

int main(){

  // Explicit type casting
  int i;
  float f = 3.14;
  i = (int) f; //convert a datum of a float to integer.

  cout << i; // print 3
  cout << " ";

  int a = sizeof (i);

  cout << a; //print 4, the size of the integer i
  cout <<" ";
  return 0;
}
