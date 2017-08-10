// pointers to structures
#include <iostream>
#include <string>
using namespace std;

struct movies_t
{
  string title;
  int year;
};

int main()
{
  string mystr;
  int y;
  movies_t amovie;
  movies_t * pmovie;
  pmovie = &amovie;

  mystr = "Invasion of the body snatchers";
  y = 1978;

  pmovie->year = y; //same as (*pmovie).year
  pmovie->title = mystr; //same as (*pmovie).title
  cout <<pmovie->title<<endl<<pmovie->year;

  return 0;
}
