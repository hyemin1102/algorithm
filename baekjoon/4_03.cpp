#include <iostream>
using namespace std;


int main() 
{
    int arr[1000000];
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;

    int max = -1000000;
    int min = 1000000;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] >= max)  max = arr[i];
        if (arr[i] <= min) min = arr[i];
    }

    cout << min << " " << max;
    return 0;
}