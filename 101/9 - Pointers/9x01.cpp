#include <iostream>
using namespace std;

int main()
{
 int firstvalue, secondvalue;
 int *mypointer;

 mypointer = &firstvalue; //mypointer points at firstvalue
 *mypointer = 10; //firstvalue is now 10

 mypointer = &secondvalue;//mypointer now points at secondvalue
 *mypointer = 20;//secondvalue is now 20

 cout <<"First value is "<<firstvalue<<endl;
  cout <<"Second value is "<<secondvalue<<endl;
/*
We NEVER assign values to first and second directly,
only through pointers
*/
return 0;
}
