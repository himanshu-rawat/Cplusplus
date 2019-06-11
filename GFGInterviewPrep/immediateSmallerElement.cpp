// Given an integer array of size N. For each element in the array, check whether there exist a smaller element on the next immediate position of the array. If such an element exists, print that element. If there is no smaller element on the immediate next to the element then print -1.

// Input:
// The first line of input contains an integer T denoting the number of test cases. T testcases follow. Each testcase contains 2 lines of input:
// The first line contains an integer N, where N is the size of array.
// The second line contains N integers(elements of the array) sperated with spaces.

// Output:
// For each test case, print the next immediate smaller elements for each element in the array.

// Constraints:
// 1 ≤ T ≤ 200
// 1 ≤ N ≤ 107
// 1 ≤ arr[i] ≤ 1000

// Example:
// Input
// 2
// 5
// 4 2 1 5 3
// 6
// 5 6 2 3 1 7

// Output
// 2 1 -1 3 -1
// -1 2 -1 1 -1 -1
#include <iostream>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int size;
        cin >> size;
        int arr[100000];
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < size - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                cout << arr[i + 1] << " ";
            }
            else
            {
                cout << "-1"
                     << " ";
            }
        }
        cout << "-1" << endl;
    }
    return 0;
}