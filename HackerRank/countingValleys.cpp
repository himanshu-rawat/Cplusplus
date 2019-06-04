#include <iostream>
using namespace std;
int CountValley(char ch[100000], int n, int i)
{
    int valley = 0;
    int u = 0;
    int d = 0;
    int max = 0;
    for (int i = 0; ch[i] != '\0'; i++)
    {
        if (ch[i] == 'U')
        {
            u++;
        }
        if (ch[i] == 'D')
        {
            d--;
        }
        int max = (u - d);
        if (valley <= max)
        {
            valley = max;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    char ch[1000000];
    for (int i = 0; i < n; i++)
    {
        cin >> ch[i];
    }
    CountValley(ch, n, 0);
    return 0;
}