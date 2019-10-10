#include <iostream>
using namespace std;
int main()
{
    int testCases;
    cin >> testCases;
    while (testCases--)
    {
        int n, j = 0;
        cin >> n;
        int *arr = new int[n];
        int *dynamic = new int;
        int rotate;
        cin >> rotate;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int i = rotate; i < n; i++)
        {
            // cout << arr[i] << " ";
            dynamic[j] = arr[i];
            j++;
        }
        // cout << endl;
        for (int i = 0; i < rotate; i++)
        {
            // cout << " i second = " << i << endl;
            // cout << arr[i] << " ";
            dynamic[j] = arr[i];
            j++;
        }
        for (int i = 0; i < n; i++)
        {
            cout << dynamic[i] << " ";
        }
        delete[] arr;
        cout << endl;
    }
    return 0;
}