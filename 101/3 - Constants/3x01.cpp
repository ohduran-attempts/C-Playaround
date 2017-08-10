# include <iostream>
using namespace std;

// This define two new constants that can be used as normal
// Directive for the preprocessor: no need for semicolon
#define PI 3.141592
#define NEWLINE '\n'

int main()
{
  const double r = 5.0; //constant values cannot be modified
  double circle;

  circle = 2 * PI * r;
  cout << circle;
  cout << NEWLINE;

  return 0;
}
