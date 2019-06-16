#include <iostream>
using namespace std;
int length(char ch[])
{
    int charLen = 0;
    for (int i = 0; ch[i] != '\0'; i++)
    {
        charLen++;
    }
    return charLen;
}
int main()
{
    char str1[1000], str2[1000];
    cin >> str1 >> str2;
    int s1 = length(str1);
    int s2 = length(str2);

    if (s1 != s2)
    {
        cout << "false";
        return 0;
    }
    else
    {
        int i;
        for (i = 0; i < s1; i++)
        {
            if (str1[i] == str2[s2 - 1])
            {
            }
            else
            {
                cout << "false";
                return 0;
            }
            s2--;
        }
        if (i == s1)
        {
            cout << "true";
            return 0;
        }
    }
    return 0;
}