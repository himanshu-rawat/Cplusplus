#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int *numArr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> numArr[i];
    }
    int lowest = numArr[0];
    for (int i = 1; i < n; i++)
    {
        lowest = min(lowest, numArr[i]);
    }
    cout << lowest << endl;
    return 0;
}
// simpleHCF