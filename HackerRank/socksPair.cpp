#include <iostream>
using namespace std;
int socksPair(int arr[], int n)
{
    int pair = 0;
    for (int i = 0; i < n; i++)
    {
        int val = arr[i];
        for (int j = 0; j < i; j++)
        {
            if (val == arr[j])
            {
                val = -1;
            }
        }
        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (val == arr[j])
            {
                // cout << "arr[j] " << arr[j] << endl;
                count++;
            }
        }
        count = (count / 2);
        pair = pair + count;
    }
    return pair;
}
int main()
{
    int n;
    cin >> n;
    int arr[1000];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << socksPair(arr, n);
    return 0;
}