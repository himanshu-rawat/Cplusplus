#include <iostream>
#include <vector>
using namespace std;
int pivotIndex(vector<int> vec)
{
    int sum = 0, leftSum = 0;
    for (int i = 0; i < vec.size(); i++)
    {
        sum = sum + vec[i];
    }
    for (int i = 0; i < vec.size(); i++)
    {
        sum = sum - vec[i];
        if (sum == leftSum)
        {
            return i;
        }
        leftSum = leftSum + vec[i];
    }
    return -1;
}
int main()
{
    int n;
    cin >> n;
    vector<int> vec;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        vec.push_back(num);
    }
    int number = pivotIndex(vec);
    cout << number << endl;
    return 0;
}