// Given an array of sorted integers. The task is to find the closest value to the given number in array. Array may contain duplicate values.

// Note: If the difference is same for two values print the value which is greater than the given number.

// Input:
// The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case consists of two lines. First line of each test case contains two integers N & K and the second line contains N space separated array elements.

// Output:
// For each test case, print the closest number in new line.

// Constraints:
// 1<=T<=100
// 1<=N<=105
// 1<=K<=105
// 1<=A[i]<=105

// Example:
// Input:
// 2
// 4 4
// 1 3 6 7
// 7 4
// 1 2 3 5 6 8 9

// Output:
// 3
// 5
#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int size, num, index = -1, minValue = INT_MAX;
        cin >> size >> num;
        int arr[100000] = {0};
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }

        int i;
        for (i = 0; i < size; i++)
        {
            int val = arr[i] - num;
            if (val < 0)
            {
                val = val * (-1);
            }
            if (minValue >= val)
            {
                minValue = val;
                index = i;
            }
        }
        cout << arr[index] << endl;
    }

    return 0;
}