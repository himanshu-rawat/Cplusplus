#include <iostream>
using namespace std;
int count = 0;
void cloudJump(char ch[], int i, int n)
{
    if (i == n)
    {
        cout << count - 1;
        return;
    }
    int val = ch[i + 1] - '0';
    int val2 = ch[i + 2] - '0';
    // cout << val << " " << val2 << endl;
    if (val2 == 0)
    {
        count++;
        cloudJump(ch, i + 2, n);
    }
    else
    {
        count++;
        cloudJump(ch, i + 1, n);
    }
}
int main()
{
    int n;
    cin >> n;
    char ch[1000];
    for (int i = 0; i < n; i++)
    {
        cin >> ch[i];
    }
    cloudJump(ch, 0, n);
    return 0;
}