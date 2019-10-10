#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[10000];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int locolSum = arr[0], globalSum = arr[0];
    for (int i = 1; i < n; i++)
    {
        locolSum = max(arr[i], locolSum + arr[i]);
        globalSum = max(locolSum, globalSum);
    }
    cout << globalSum << endl;
    return 0;
}