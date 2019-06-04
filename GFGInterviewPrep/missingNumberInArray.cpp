#include <iostream>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int sizeOfArray;
        cin >> sizeOfArray;
        int val = (sizeOfArray * (sizeOfArray + 1)) / 2;
        int arr[100000];
        for (int i = 1; i < sizeOfArray; i++)
        {
            cin >> arr[i];
        }
        int sum = 0;
        for (int i = 1; i < sizeOfArray; i++)
        {
            sum = sum + arr[i];
        }
        cout << val - sum << endl;
    }
    return 0;
}