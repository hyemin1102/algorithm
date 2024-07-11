#include <iostream>
using namespace std;


int main() 
{
    ios_base::sync_with_stdio(false);

    int arr[9];
    int max = 0;
    int index;


    for (int i=0; i<9; i++) {
      cin >> arr[i];
      
      if (arr[i] > max) {
        max = arr[i];
        index = i + 1;
      }
    }
    cout << max << "\n" << index << "\n";
    
    return 0;
}