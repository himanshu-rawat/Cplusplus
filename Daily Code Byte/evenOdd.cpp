#include <iostream>
using namespace std;
int main()
{
    int testCases;
    cin >> testCases;
    while (testCases--)
    {
        int evenSum = 0, oddSum = 0;
        char ch[1000000];
        cin >> ch;
        for (int i = 0; ch[i] != '\0'; i++)
        {
            int num = ch[i] - '0';
            if (num % 2 == 0)
            {
                evenSum += num;
            }
            else
            {
                oddSum += num;
            }
        }
        if (evenSum % 4 == 0 || oddSum % 3 == 0)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}