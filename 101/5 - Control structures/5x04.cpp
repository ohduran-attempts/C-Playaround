#include <iostream>
using namespace std;

int main(){
  // Initialization; Condition; Increase
  for (int c = 0, end = 15, aborted = 9; c<end; c++){
    cout << c << ", ";
    //BREAK condition
    if (c == aborted){
      cout << endl << "Aborted!";
      break;
    }
  }
  return 0;
}
