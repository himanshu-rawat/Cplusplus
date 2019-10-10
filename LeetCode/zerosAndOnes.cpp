#include <iostream>
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
        int high, low, mid;
        low = 0, mid = 0, high = n - 1;
        while (mid <= high)
        {
            if (arr[mid] == 1)
            {
                mid++;
            }
            else if (arr[mid] == 2)
            {
                swap(arr[mid], arr[high]);
                mid++;
                high--;
            }
            else
            {
                swap(arr[mid], arr[low]);
                mid++;
                low++;
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}