// DO - WHILE
//Grant at least one execution
# include <iostream>
using namespace std;

int main(){
  int n = 10; //0 will execute at least once, despite while condition
  do{
    cout <<n<<", ";
    n--; // n = n-1
  } while (n >0);
  return 0;
}
