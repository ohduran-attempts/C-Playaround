//function addition
#include <iostream>
using namespace std;

bool globalVariable = true

int addition(int a, int b){
  int r = a + b;
  return r;
}

// C++ ALWAYS begins its execution by the main function
int main(){
  int z; //this is a LOCAL variable, cannot be used outside main.
  z = addition (5,3);
  cout <<"5 + 3 is " << z;
  return 0;
}
