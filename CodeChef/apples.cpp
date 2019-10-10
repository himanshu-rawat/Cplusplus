#include <iostream>
using namespace std;
int main()
{
    unsigned short int testCases;
    cin >> testCases;
    while (testCases--)
    {
        long long int n, k;
        cin >> n >> k;
        if (n / k == 1)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}