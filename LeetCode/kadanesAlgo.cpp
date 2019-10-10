#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int testCases;
    cin >> testCases;
    while (testCases--)
    {
        int n;
        cin >> n;
        int arr[100000];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int localSum = arr[0], globalSum = arr[0];
        for (int i = 1; i < n; i++)
        {
            localSum = max(arr[i], localSum + arr[i]);
            globalSum = max(localSum, globalSum);
        }

        cout << globalSum << endl;
    }
    return 0;
}