//Passing parameters by reference
#include <iostream>
using namespace std;

/*
we effect the values of the variables referenced by a, b,c,
changing the values of the global variables, outside
the scope of addone function.
*/
void addone(int& a, int& b, int& c){
  a++;
  b++;
  c++;
}

int main(){
  int x = 1, y =3, z = 7;
  addone(x,y,z);
  cout << x << y << z; //will print x+1, y+1, z+1
  return 0;
}
