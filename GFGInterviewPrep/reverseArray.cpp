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
        for (int i = size - 1; i >= 0; i--)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}