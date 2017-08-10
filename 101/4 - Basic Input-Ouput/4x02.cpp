/*
The standard header file <sstream> defines a class stringstream
that allows a string-based object  to be treated as a stream.
This way, we can perform extraction and insertion operations
from/to strings.

This is specially useful to convert strings to numerical values and viceversa.

*/
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main(){
  string mystr;
  float price = 0;
  int quantity = 0;

cout << "Enter price: ";
//getline(cin,mystr);
mystr = "22.25";
stringstream(mystr) >> price;
cout << "Enter quantity: ";
//getline(cin,mystr);
mystr = "7";
stringstream(mystr) >> quantity;
cout << "Total price:  " << price*quantity << endl;


  return 0;
}
