/* Delete
Since the necessity of dynamic memory is temporary,
once it is no longer needed it should be freed so that the memory
becomes available again.
*/
#include <iostream>
#include <new>
using namespace std;

int main()
{
  // Allocate dynamic memory
  int i=5;
  int * p;

  p = new (nothrow) int[i];
  if (p == 0){
    cout <<"Error: memory could not be allocated.";
  }
  else
  {
    for (int n=0; n<i; n++)
    {
      p[n] = n*n;
    }
    cout << "Numbers are: "<<endl;
    for (int n= 0;n<i;n++){
      cout << p[n]<<", ";
    }
    delete[] p;
  }
  return 0;


}
