//Arrays as parameters

/*
In C++ we are not allowed to pass complete blocks
of memory, but we can pass its address as reference,
which is a much more efficient way to do it.
*/
#include <iostream>
using namespace std;

// arg accepts any array whose elements
// are of type int.
void printarray(int arg[], int length)
{
  for (int n = 0; n<length; n++)
  {
    cout << arg[n] << " ";
  }
  cout << endl;
}

int main()
{
  int firstarray[] = {5, 10, 15};
  int secondarray[] = {2, 4, 6, 8, 10};
  printarray(firstarray,3);
  printarray(secondarray, 5);

  return 0;
}
