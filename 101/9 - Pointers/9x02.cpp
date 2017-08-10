//more pointers
#include <iostream>
using namespace std;

int main()
{
  int firstvalue = 5, secondvalue = 15;
  int * p1, * p2;

  p1 = &firstvalue; //      p1 points at firstvalue
  p2 = &secondvalue;// p2 points at secondvalue

  *p1 = 10;// value pointed by p1 (first) is now 10
  *p2 = *p1;//value of p2 is now value of p1

  p1 = p2; //p1 now points at value pointed by p2
  *p1 = 20; // value pointed by p1 (second) is now 20

  cout << "first is "<< firstvalue<<endl;
  cout <<"second is "<<secondvalue<<endl;
  return 0;
}
