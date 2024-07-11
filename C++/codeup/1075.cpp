#include <iostream>

using namespace std;

int main() {
  

  int n;
  cin >> n;

  while(n!=0) {
    n=n-1; 
    cout << n << endl;
    if (n == 0)
      break;
  }
  
  return 0;
}