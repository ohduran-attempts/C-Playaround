/*
Arrays are blocks of non-dynamic memory whose size
must be determined before execution.
*/
#include <iostream>
using namespace std;

int main()
{
  int length = 5;
  int a = 2;
  //make sure that the length matches the predefined value
  int billy[length] = {16, 2, 77, 40, 12071}; //declaration of a new array
  cout << billy[0]<<endl; //first element.
  billy[0] = 11; //access and modification of the first element.
  cout << billy[0]<<endl; //first element has changed.

  billy[5] = 123;
  cout << billy[5];
  /*wait, we can access memory OUTSIDE
  the definition of the list billy*/

  //Other valid operations
  billy[0] = a;
  billy[a] = 1;
  int b = billy[a+2];
  billy[a+ 2] = b;
  billy[billy[a]] = billy[2] + 5;

  // Print all elements in billy
  for (int i= 0; i< length; i++)
  {
    cout << billy[i]<<endl;
  }
  return 0;
}
