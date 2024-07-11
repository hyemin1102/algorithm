#include <iostream>

using namespace std;

int main() {
  
  int n, m;
  cin >> n;
reget:
  cin >> m;
  cout << m << "\n";
  if(n-- != 0) goto reget; //reget: 으로 이동, n의 값 1 만큼 감소

  return 0;
}