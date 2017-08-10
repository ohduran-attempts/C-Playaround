/*
In order to request dynamic memory,
we use the operator new, followed by
a data type specifier and the number of
elements within brackets [].
It returns a pointer to the beginning
of the new block of memory allocated.

The dynamic memory requested by our program
is allocated by the system from the memory heap
However, computer memory is a limited resource,
and it can be exhausted.
Therefore, it is important to have some mechanism
to check if our request to allocate was successful or not.
-Handling exceptions of type bad_alloc
-Nothrow: when memory allocation fails,
instead of throwing a bad_alloc, it returns
a null pointer.
*/
#include <iostream>
#include <new>
using namespace std;

int main()
{
  int * bobby;
  bobby = new (nothrow) int [5];
  // bobby points to a valid block of memory with space
  // for 5 elements of type int.

  //Nothrow handling
  if (bobby == 0)
  {
    //error assigning memory. Take measures
    cout << "Error assigning memory."
  }

bobby[0] = 12; // first element pointed by bobby.
*bobby = 12; //first element pointed by bobby.
  return 0;
}
