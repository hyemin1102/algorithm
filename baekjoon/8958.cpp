#include <iostream>
#include <string>
using namespace std;

int main() {
      ios_base::sync_with_stdio(0);
      cin.tie(0);

      int tc, score, plus;
      string ox;

      cin >> tc;
      for(int i=0; i<tc; i++) {
        cin >> ox;
        score=plus=0;
        for (int i = 0; i < ox.length(); i++) {
          if (ox[i]=='O') plus++; //plus=plus+1
          else plus=0;
          score +=plus;
        }
      cout << score << '\n';
    }
}

  //   for (int i = 0; i < tc; i++)
  //   {
  //     cout << score << "\n";
  //   }
    
  // }
  // for (auto c : ox) {
  //   if (c=='O') {
  //     int score[c];
  //     plus++; // plus=plus + 1
  //     score[score+=plus]  //score= score+plus
  //   } else {
  //     plus=0; //'X'를 만나면 연속된 'O'의 수 초기화
  //   }
  // }
