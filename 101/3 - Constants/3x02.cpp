#include <iostream>
using namespace std;

int main(){

  // a&&b
  // only true if a=b=true

  //a||b
  //only false if a=b=false

  // CONDITIONAL
  // condition ? result_true : result_false
  int x = 7==5 ? 4 : 3; // return 3
  int y = 5>4 ? 5 : 4; // return 5

  cout << x; //print 3
  cout << " ";
  cout << y;// print 5
  cout <<" ";

  int a,b,c;
  a = 2;
  b = 7;

// print the biggest of these two using conditional
  c = (a>b) ? a : b;

  cout << c;

  return 0;

}
