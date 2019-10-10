#include <iostream>
using namespace std;
int main()
{
    unsigned short int testCases;
    cin >> testCases;
    while (testCases--)
    {
        unsigned short int n;
        cin >> n;
        int *goal = new int[n];
        int *foul = new int[n];
        for (int i = 0; i < n; i++)
        {
            int value;
            cin >> value;
            goal[i] = value * 20;
        }
        for (int i = 0; i < n; i++)
        {
            int value;
            cin >> value;
            foul[i] = value * 10;
        }
        for (int i = 0; i < n; i++)
        {
            goal[i] = goal[i] - foul[i];
        }
        int max = 0;
        for (int i = 0; i < n; i++)
        {
            if (max < goal[i])
            {
                max = goal[i];
            }
        }
        cout << max << endl;
    }
    return 0;
}