#include <iostream>
using namespace std;

int main() {
  int n; 
  int sum = 0;
  cin >> n;

  for (int i = 0; i <= n; i++)
  {
    if(i%2 == 1) sum+=i;
  }

  cout << sum << "\n";
  
  return 0;
}