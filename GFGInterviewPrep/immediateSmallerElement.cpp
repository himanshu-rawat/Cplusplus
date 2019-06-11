#include <iostream>
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
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < size - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                cout << arr[i + 1] << " ";
            }
            else
            {
                cout << "-1"
                     << " ";
            }
        }
        cout << "-1" << endl;
    }
    return 0;
}