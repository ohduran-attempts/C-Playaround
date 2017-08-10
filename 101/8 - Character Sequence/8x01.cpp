#include <iostream>
using namespace std;

int main()
{
  char myword1 [] = {'H','e','l','l','o','\0'};
  char myword2 [] = "Hello"; //do not need string class.
  /*
  Both cases are the same thing:
  Null-terminated sequences of characters.
  Clarify:
  An array is in fact a constant pointer to a block of memory.
  */
  cout << myword1 << " " << myword2;
  return 0;
}
