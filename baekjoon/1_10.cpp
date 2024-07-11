#include <iostream>

using namespace std;

int main() {
  int a,b;

  cin >> a >> b;

  cout << a*(b%10) << "\n"; 
  cout << a*(b/10%10) << "\n";
  cout << a*(b/100) << "\n";
  cout << a*b << endl;


  return 0;
}

// int형이라 소숫점 밑에 것들이 날라가는것
// 