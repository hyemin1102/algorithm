#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// '-'를 제거하는 함수
string removeHyphen(const string& input) {
    string result;
    
    for (int i = 0; i < input.size(); i++) {
        if (input[i] != '-') {
            result += input[i];
        }
    }
    return result;
}

int main() {
    string a;
  //int -> 범위 -2147483648 ~ 2147483647

  // a = 2147483647;
  // cout << a << endl;

    cin >> a;

  // string cleanNumber = removeHyphen(a);
  // cin >> b;
    a.erase(find(a.begin(), a.end(), '-'));


    cout << a  << endl;


    return 0;
}