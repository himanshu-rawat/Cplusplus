#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int size;
        cin >> size;
        int arr[100000];
        int sol[100000];
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + size);
        int mid = (size / 2);
        if (size % 2 == 0)
        {
            mid = (size - 1) / 2;
        }
        int pos = mid;
        for (int i = 0; i < size; i++)
        {

            if (i % 2 == 0)
            {
                if (i != 0)
                {
                    pos = pos - i;
                }
            }
            else
            {
                pos = pos + i;
            }
            sol[pos] = arr[i];
        }
        for (int i = 0; i < size; i++)
        {
            cout << sol[i] << " ";
        }
        cout << endl;
    }

    return 0;
}