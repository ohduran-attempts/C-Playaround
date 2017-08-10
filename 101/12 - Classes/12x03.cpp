//example: class constructor

#include <iostream>
using namespace std;

class CRectangle
{
  int width, height;
public:
  CRectangle (int, int);
  ~CRectangle ();
  int area ()
  {
    return width * height;
  }
};

//constructor
CRectangle::CRectangle (int a, int b)
{
  width = a;
  height = b;
}

//destructor
CRectangle::~CRectangle ()
{
  delete width;
  delete height;
}

int main()
{
  CRectangle rect (3,4); //construct upon declaration.
  CRectangle rectb (5,6);

    cout <<"rect area: " << rect.area() <<endl;
    cout <<"rectb area: " << rectb.area() <<endl;
    return 0;
}
