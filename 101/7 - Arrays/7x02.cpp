/*
Multidimensional arrays are just an abstraction
for programmers, since we can obtain the same result
with a simple array just by putting a factor between indexes.
*/
#include <iostream>
using namespace std;

#define WIDTH 10
#define HEIGHT 10

int main()
{
  int multiple[HEIGHT][WIDTH];
  int n,m;
  for (n = 0; n<HEIGHT; n++)
  {
    for (m = 0; m< WIDTH; m++)
    {
      multiple[n][m] = n*m;
      cout << multiple[n][m]<<" ";
    }
    cout <<endl;
  }
  return 0;
}
