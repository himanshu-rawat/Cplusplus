#include <iostream>

using namespace std;
bool isAnagram(string s, string t)
{
    if (s.length() == t.length())
    {
        int freq[26] = {0};
        for (int i = 0; i < s.length(); i++)
        {
            freq[s[i] - 'a']++;
        }
        // for (int i = 0; i < 26; i++)
        // {
        //     cout << freq[i] << " ";
        // }
        // cout << endl;
        for (int i = 0; i < t.length(); i++)
        {
            freq[t[i] - 'a']--;
        }
        // for (int i = 0; i < 26; i++)
        // {
        //     cout << freq[i] << " ";
        // }
        // cout << endl;
        for (int i = 0; i < 26; i++)
        {
            if (freq[i] != 0)
            {
                return false;
            }
        }
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    string s, t;
    cin >> s >> t;
    if (isAnagram(s, t))
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
    return 0;
}