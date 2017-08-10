//pointer to functions
#include <iostream>
using namespace std;

int addition (int a, int b){
  return a+b;
}

int substraction(int a, int b){
  return a-b;
}

int operation(int x, int y, int (*functionToCall)(int, int))
{
  int g;
  g = (*functionToCall)(x,y);
  return g;
}

int main()
{
  int m,n;
  int (*minus)(int,int) = substraction; //minus will now be substraction

  m = operation(7,5,addition);
  n = operation(20,m,minus);
  cout <<n;
  return 0;

}
