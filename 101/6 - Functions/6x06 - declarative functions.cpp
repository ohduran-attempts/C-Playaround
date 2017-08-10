/*
Declaring functions before main allows us
to define them later on in the code.
*/

#include <iostream>
using namespace std;

void odd(int a); //declare, then define after main.
void even(int a);

int main()
{
  int number;
  for (int i; i < 15; i++)
  {
    odd(i);
    even(i);
  }
}

void odd(int a)
{
  if (a%2 != 0) cout << "Number is odd.\n";
}

void even(int a)
{
  if (a%2 == 0) cout << "Number is even.\n";
}
