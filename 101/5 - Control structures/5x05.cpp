#include <iostream>
using namespace std;

int main(){
  // Initialization; Condition; Increase
  for (int c = 0, end = 15, aborted = 9; c<end; c++){
    //CONTINUE condition - skip this and go to c++
    if (c == aborted) continue; // aborted won't be printed
    cout << c << ", ";
  }
  return 0;
}
