#include <iostream>
using namespace std;
int main()
{
    int testCases;
    cin >> testCases;
    while (testCases--)
    {
        int n, sum;
        cin >> n >> sum;
        int *arr = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int x = 0, winSum = 0, flag = 0;
        for (int i = 0; i < n; i++)
        {
            winSum += arr[i];
            while (winSum > sum)
            {
                winSum = winSum - arr[x];
                x++;
            }
            if (winSum == sum)
            {
                cout << x + 1 << " " << i + 1 << endl;
                flag = 1;
                break;
            }
        }
        if (flag != 1)
        {
            cout << "-1" << endl;
        }
    }

    return 0;
}

void function(int testCases)
{
    while (testCases--)
    {
        int n, sum, x = -1, y = -1, counter = 0;
        cin >> n >> sum;
        int *arr = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int i;
        for (i = 0; i < n; i++)
        {
            int curSum = 0;
            for (int j = i; j < n; j++)
            {
                // cout << "hEre" << endl;
                curSum = curSum + arr[j];
                // cout << "CurSum = " << curSum << endl;
                if (curSum == sum)
                {
                    x = j + 1;
                    y = i + 1;
                    counter = 1;
                    cout << y << " " << x << endl;
                    break;
                }
            }
            if (counter)
            {
                break;
            }
        }
        if (counter != 1 && i >= n)
        {
            cout << "-1" << endl;
        }
    }
}