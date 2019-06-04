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
    d = d % n;
    for (int i = d; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    for (int i = 0; i < d; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}