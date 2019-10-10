#include <iostream>
using namespace std;
int RightMostDifferentBit(int testCases)
{
    while (testCases--)
    {
        int n, m, pos = 1, flag = 0;
        cin >> n >> m;
        while (n || m)
        {
            int valOne = n & 1;
            int valOther = m & 1;
            if (valOne != valOther)
            {
                cout << pos << endl;
                flag = 1;
                break;
            }
            pos++;
            n = n >> 1;
            m = m >> 1;
        }
        if (flag != 1)
        {
            cout << "-1" << endl;
        }
    }
}
int main()
{
    int testCases;
    cin >> testCases;
    RightMostDifferentBit(testCases);
    // while (testCases--)
    // {
    //     int n, flag = 0, pos = 1;
    //     cin >> n;
    //     while (n)
    //     {
    //         int val = n & 1;
    //         if (val == 1)
    //         {
    //             cout << pos << endl;
    //             flag = 1;
    //             break;
    //         }
    //         n = n >> 1;
    //         pos++;
    //     }
    //     if (flag != 1)
    //     {
    //         cout << "0" << endl;
    //     }
    // }

    return 0;
}