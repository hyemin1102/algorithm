#include <iostream>

using namespace std;

int main() {
  
  int y, m, d;

  

  cin >> y;
  cin.ignore(y, '.');
  cin >> m;
  cin.ignore(m, '.');
  cin >> d;

  cout.width(4);
  cout.fill('0'); //폭을 4로 지정
  cout << y << '.';

  cout.width(2);
  cout.fill('0'); //채움 문자는 '0'
  cout << m << '.';

  cout.width(2);
  cout.fill('0');
  cout << d << endl;
  

  

  return 0;
}