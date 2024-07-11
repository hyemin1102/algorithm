#include <iostream>

using namespace std;

int main() {
  
  int a;
  cin >> a;


  if (100>=a && a>=90)
    cout << "A\n";
  else if (89>=a && a>=70)
    cout << "B\n";
  else if (69>=a && a>=40)
    cout << "C\n";
  else if (39>=a && a>=0)
    cout << "D\n";

  return 0;
}