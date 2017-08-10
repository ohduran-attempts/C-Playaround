#include <iostream>
using namespace std;

int main(){
int x = 100;
//if (condition) statement
if (x == 100) cout <<"x is "<<x<<endl;
else cout <<"x is not 100";
int y = 2;
if (y == 100){ //More than one line statement
  cout <<"y is " << endl;
  cout <<"100" << endl;
}
else if (y ==2){
  cout <<"y is 2" << endl;
}

return 0;
}
