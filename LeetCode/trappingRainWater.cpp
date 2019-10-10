#include <iostream>
using namespace std;
int main()
{
    int testCase;
    cin >> testCase;
    while (testCase--)
    {
        int n;
        cin >> n;
        int arr[100000];
        int left[100000];
        int right[100000];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int l = 0;
        for (int i = 0; i < n; i++)
        {

            if (arr[i] > l)
            {
                l = arr[i];
                left[i] = l;
            }
            else
            {
                left[i] = l;
            }
        }
        int r = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (arr[i] > r)
            {
                r = arr[i];
                right[i] = r;
            }
            else
            {
                right[i] = r;
            }
        }
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum = sum + (min(left[i], right[i]) - arr[i]);
        }
        cout << sum << endl;
    }
    return 0;
}