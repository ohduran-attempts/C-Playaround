#include <iostream>
using namespace std;

int main(){
  int n = 10;
  loop:
  cout << n << ", ";
  n--;
  if (n>0) goto loop; //this acts as a do-while
  cout << "FIRE!\n";
  return 0;
}
/*
goto allows to make an absolute jump to another point in the program.
This destination point is identified by a label (using colon (:) followed by the code),
which is then used as an argument for goto.
