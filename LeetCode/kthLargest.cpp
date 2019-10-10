#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int findKthLargestVector(vector<int> vec, int k)
{
    sort(vec.begin(), vec.end(), greater<int>());
    return vec[k - 1];
}
int main()
{
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        v.push_back(num);
    }
    int k;
    cin >> k;
    int val = findKthLargestVector(v, k);
    // cout << val << endl;
    return 0;
}