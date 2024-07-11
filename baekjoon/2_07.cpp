#include <iostream>

using namespace std;

int main() {
  
  int A, B, C;
  int M;
  cin >> A >> B >> C;

  if(A==B && B==C) {
    M=10000+A*1000;
  }else if (A==B || B==C){
    M=1000+B*100;
  }else if(A==C) {
    M=1000+A*100;
  }else {
    M=max(max(A,B),C)*100;
  }

  cout << M << endl;


  return 0;
}