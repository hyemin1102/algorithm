#include <iostream>

using namespace std;

int main() {
  
  // int a, b, c;

  // cin >> a >> b >> c;

  // if (a % 2==0)
  //   cout << "even" << "\n";
  // else
  //   cout << "odd" << "\n";
  // if (b % 2==0)
  //   cout << "even" << "\n";
  // else
  //   cout << "odd" << "\n";
  // if (c % 2==0)
  //   cout << "even" << "\n";
  // else
  //   cout << "odd" << endl;
  int arr[3];
  
  for (int i=0; i < 3; i++) {
    cin >> arr[i];
  }

  for(int i = 0; i<3; i++) {
    if (arr[i] % 2 ==0)
      cout << "even" << "\n";
    else 
      cout << "odd" << endl;
  }


  return 0;
}