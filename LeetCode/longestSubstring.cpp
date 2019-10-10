#include <iostream>
using namespace std;
int lengthOfLongestSubstring(string ch)
{
    int sum = 0;
    for (int i = 0; ch[i] != '\0'; i++)
    {
        for (int j = i; ch[j] != '\0'; j++)
        {
            int freq[256] = {0};
            for (int k = i; k <= j; k++)
            {
                freq[ch[k] - 'a']++;
            }
            // for (int i = 0; i < 256; i++)
            // {
            //     cout << freq[i];
            // }
            // cout << endl;
            int cumm = 0;
            for (int i = 0; i < 26; i++)
            {
                if (freq[i] > 1)
                {
                    cumm = 0;
                    break;
                }
                else
                {
                    cumm = cumm + freq[i];
                }
            }
            if (cumm > sum)
            {
                sum = cumm;
            }
            // cout << endl;
        }
    }
    return sum;
    // cout << "SUM = " << sum << endl;
}
int main()
{
    string s;
    cin >> s;
    // int freq[26] = {0};
    int length = lengthOfLongestSubstring(s);
    cout << length;
    return 0;
}