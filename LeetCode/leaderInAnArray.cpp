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
        int arr[100000];   // = new int[n];
        int store[100000]; // = new int;
        int val = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        store[val] = arr[n - 1];
        int max = arr[n - 1];
        val++;
        for (int i = n - 2; i >= 0; i--)
        {
            if (arr[i] >= max)
            {
                max = arr[i];
                store[val] = arr[i];
                val++;
            }
        }
        for (int i = val - 1; i >= 0; i--)
        {
            cout << store[i] << " ";
        }
        cout << endl;
    }
    return 0;
}