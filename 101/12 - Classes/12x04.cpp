//this
#include <iostream>
using namespace std;

//check if a parameter passed to a member+
//function is the object itself.
class CDummy
{
public:
  int istime(CDummy& param);
};

int CDummy::istime (CDummy& param)
{
  if (&param == this) return true;
  else return false;
}

int main()
{
  CDummy a;
  CDummy* b = &a;
  if (b->istime(a))
  {
    cout <<"yes, &a is b";
  }
  return 0;
}
