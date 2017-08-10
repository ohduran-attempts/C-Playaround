//More than one returning value
#include <iostream>
using namespace std;

//Default value of x is 1.
//Make sure default values are the latter ones
void prevnext(int& prev, int& next, int x=1){
  prev = x-1;
  next = x+1;
}

int main(){
  int y, z;
  prevnext(y,z); // y = x-1, z = x+1
  cout << "Previous= "<<y<<endl;
  cout <<"Next= "<<z<<endl;
  return 0;
}
