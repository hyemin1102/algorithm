#include <iostream>
#include <list>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  string s;
  int count;
  cin >> s >> count;
  
  list<char> L;
  for (int i=0; i<s.length(); i++) {
    L.push_back(i);
  }
  list<char>::iterator cursor = L.end();
  while (count--) {
      char od;
      cin >> od; 
      if (od=='P') {
        char add;
        cin >> add;
        L.insert(cursor, add);
      } else if(od=='L') {
        if(cursor != L.begin()) cursor--;
      } else if(od=='D') {
        if(cursor != L.end()) cursor++;
      } else { //B
        if (cursor != L.begin()) {
          cursor--;
          cursor = L.erase(cursor);
        }
        
      }
    }
    for (auto c : L) cout << c; 
}