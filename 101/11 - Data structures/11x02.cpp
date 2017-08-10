//example about structures
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

struct movies_t {
  string title;
  int year;
} mine, yours;

void printmovie (movies_t movie);

int main(){
  string mystr;

  mine.title = "2001: A Space Odyssey";
  mine.year = 1968;

  yours.title = "The Dark Knight";
  yours.year = 2012;

  cout <<"My favourite movie is: ";
  printmovie(mine);
  cout <<"and yours is: ";
  printmovie(yours);
  return 0;
}

void printmovie(movies_t movie){
  cout << movie.title;
  cout << " ("<<movie.year<<") "<<endl;
}
