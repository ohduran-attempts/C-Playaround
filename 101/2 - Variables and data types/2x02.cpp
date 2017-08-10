// Operating with variables

# include <iostream>
using namespace std;
// Global Variables: Can be referred from anywhere
int Integer

int main(){
  // declaring variables in Local; can only be referred in main
  int a,b;
  int result;

  // Instructions:
  a = 5;
  b = 2;
  a = a + 1;
  result = a - b;

  // print out the result
  cout << result;

  // terminate the program
  return 0;
}
