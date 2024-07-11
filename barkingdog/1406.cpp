#include <iostream>
#include <list>


using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  string alpha;
  int count;
  cin >> alpha >> count;

  list<char> L; //문자열 리스트 
  for (auto c : alpha) {
    L.push_back(c);
  }
  auto c = L.end();
  while (count--) {
    char op;
    cin >> op;
    if (op=='L') {
      if (c != L.begin()) 
      c--;
    }
    else if (op=='D') {
      if (c != L.end()) 
      c++;
    }
    else if (op=='B') {
      if (c != L.begin()) {
        c--;
        c = L.erase(c);
      }
    }
    else {
      char add;
      cin >> add;
      L.insert(c, add);
    }
  }
  
  for (auto c : L) {
    cout << c;
  }
}