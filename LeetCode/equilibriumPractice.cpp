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
    int leftsum = 0, sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        sum = sum - arr[i];
        if (sum == leftsum)
        {
            return i;
        }
        leftsum = leftsum + arr[i];
    }

    return -1;
}