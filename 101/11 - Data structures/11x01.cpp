/*Data structures
A data structure is a group of data elements grouped together under one name.
These elements, known as members, can have different types and lengths.
*/
#include <iostream>
using namespace std;

int main(){
  // define the product data structure
  struct product {
    int weight;
    float price;
  };

  //instantiate products
  product apple;
  product banana;

  //Once we have declared our three objects of a determined structure,
  // we can operate directly with their members.

  apple.weight = 1;
  apple.price = 0.60;
  banana.weight = 10;
  banana.price = 100;

  cout <<banana.price <<" "<< banana.weight<<endl;
  cout <<apple.price <<" "<< apple.weight<<endl;


  return 0;
}
