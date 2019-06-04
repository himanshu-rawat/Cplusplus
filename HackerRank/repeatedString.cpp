#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string s;
    cin >> s;
    long long int size = s.length();
    long long int n;
    cin >> n;
    long long int rem = n % size;
    long long int repetition = n / size;
    long long int count = 0, remCount = 0;
    for (long long int i = 0; i < size; i++)
    {
        if (s[i] == 'a')
        {
            count++;
        }
        if (s[i] == 'a' && i < rem)
        {
            remCount++;
        }
    }
    long long int ans = count * repetition + remCount;
    cout << ans;

    return 0;
}