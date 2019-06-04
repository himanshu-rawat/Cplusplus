#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int main()
{
    int arr[6][6];
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cin >> arr[i][j];
        }
    }
    int sum = INT_MIN, high = INT_MIN;
    for (int i = 0; i < 6 - 2; i++)
    {
        for (int j = 0; j < 6 - 2; j++)
        {
            sum = (arr[i][j] + arr[i][j + 1] + arr[i][j + 2] + arr[i + 1][j + 1] + arr[i + 2][j] + arr[i + 2][j + 1] + arr[i + 2][j + 2]);
            high = max(high, sum);
        }
    }
    cout << high;
    return 0;
}