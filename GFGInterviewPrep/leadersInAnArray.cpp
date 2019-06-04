#include <iostream>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        int arr[100000];
        int store[100000] = {0};
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        // int max = arr[n - 1];

        cout << "Max =" << max << endl;

        for (int i = n - 2; i >= 0; i--)
        {
            if (max <= arr[i])
            {
                store[i] = arr[i];
                max = arr[i];
            }
            else
            {
                store[i] = 0;
            }
        }
        //cout << "Here " << endl;
        // for (int i = 0; i < n; i++)
        // {

        //     cout << store[i] << " ";
        // }

        for (int i = 0; i < n; i++)
        {
            if (store[i] != 0)
            {
                cout << store[i] << " ";
            }
        }
        cout << arr[n - 1];
        cout << endl;
    }
    return 0;
}