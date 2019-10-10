#include <iostream>
#include <vector>
#define ll long long int
using namespace std;
int missingNumber(vector<int> vec)
{
    int sum = 0;
    int whole = 0;
    for (int i = 0; i < vec.size(); i++)
    {
        whole = whole + (i + 1);
        sum += vec[i];
    }
    cout << whole - sum;
}
int main()
{
    ll n;
    cin >> n;
    vector<int> vec;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        vec.push_back(num);
    }
    missingNumber(vec);
    return 0;
}