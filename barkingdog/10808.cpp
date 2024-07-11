#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  // char S[100];
  string S;
  int alpha[26];

  cin >> S;

  for (int i=0; i<26; i++) {
    alpha[i]=0;
  }

  for (auto c : S) {
    alpha[c-'a']++; //인덱스 맞춰주기 위한건가? a는 0 b는 1
    // cout << c - 'a' ;
    
  }

  for (int i=0; i<26; i++) {
    cout<<alpha[i]<<" ";
  }
}