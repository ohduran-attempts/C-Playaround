//increaser using pointers

/*
void type represents the absence of type,
one of its uses may be to pass generic parameters
to a function.
*/
#include <iostream>
using namespace std;

void increase (void* data, int psize)
{
  if (psize == sizeof(char))
  {
    char* pchar;
    pchar = (char*)data; ++(*pchar); //point to the next char
  }
  else if (psize == sizeof(int))
  {
    int* pint;
    pint = (int*)data; //point to the next integer
    ++(*pint);
  }
}

int main()
{
  char x = 'x';
  int num = 1602;
  cout <<x<<endl;
  cout<<num<<endl;
  increase(&x, sizeof(x));
  increase(&num,sizeof(num));
  cout <<x<<endl; //after x comes y
  cout<<num<<endl; //after 1602 comes 1603
}
