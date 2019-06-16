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
        int rotate;
        cin >> rotate;
        int arr[100000];
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
        rotate = rotate % size;
        for (int i = rotate; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        for (int i = 0; i < rotate; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}