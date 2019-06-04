#include <iostream>
using namespace std;
int main()
{

    int testCases;
    cin >> testCases;
    while (testCases--)
    {

        int n;
        cin >> n;
        int arr[100000];
        int freq[100000] = {0};
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {

            freq[(arr[i])]++;
        }
        for (int i = 0; i < n; i++)
        {

            cout << freq[i] << " ";
        }
        cout << endl;
        int i;
        for (i = 0; i < n; i++)
        {
            if (freq[i] > (n / 2))
            {
                cout << i << endl;
                break;
            }
        }
        if (i == n)
        {
            cout << "-1" << endl;
        }
    }

    return 0;
}