#include <iostream>

using namespace std;

int main() {
  
  int n;
  cin >> n;

  while(n != 0)
  {
    cout << n << endl;
    n=n-1;  // n--;와 같다.
  }

  return 0;
}