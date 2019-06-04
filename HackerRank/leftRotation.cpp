#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int d;
    cin >> d;
    double arr[100000];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int i;

    while (d--)
    {
        int firstElement = arr[0];
        for (i = 1; i < n; i++)
        {
            arr[i - 1] = arr[i];
        }
        i = i - 1;
        arr[i] = firstElement;
    }

    for (int k = 0; k < n; k++)
    {
        cout << arr[k] << " ";
    }
    return 0;
}