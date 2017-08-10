//pointers and arrays
#include <iostream>
using namespace std;

int main()
{
  int numbers[5];//allocate an array of 5 ints
  int * p;
  p = numbers;// now p points at numbers
  *p = 10; //first item is now 10

  p++; //p now points to the next item
  *p = 20; //second item is now 20

  p = &numbers[2]; //p now points to the third item
  *p = 30; //third item is now 30

  p = numbers + 3;//p now points to the fourth item
  *p = 40; //fourth item is now 40

  p = numbers;//p now points to the first item
  *(p+4) = 50;//the item in p+4 in memory is now 50

  for (int n=0;n<5;n++)
  {
    cout <<numbers[n]<<endl;
  }
  return 0;
}
