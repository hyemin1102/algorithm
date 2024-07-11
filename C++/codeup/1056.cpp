#include <iostream>

using namespace std;

int main() {
  
  bool t, f;
  cin >> t >> f;
  
  if ((t&&!f)||(!t&&f))
    cout << 1;
  else
    cout << 0;

  return 0;
}