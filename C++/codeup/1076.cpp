#include <iostream>

using namespace std;

int main() {
  
  char x, t='a';
  cin >> x;

  do
  {
    cout << t << " ";
    t+=1; //t=t+1;
  } while (t<=x);
  

  return 0;
}