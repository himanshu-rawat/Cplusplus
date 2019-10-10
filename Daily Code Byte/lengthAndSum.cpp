#include <iostream>
using namespace std;
int range(int length)
{
    int val = 1;
    for (int i = 1; i <= length; i++)
    {
        val = val * 10;
    }
    return val;
}
int main()
{
    int length, sum, min = -1, flag = 1, max = -1;
    cin >> length >> sum;
    //Taking Out the Limit
    int limit = range(length);
    // cout << "Limit = " << limit << endl;
    for (int i = 1; i < limit; i++)
    {
        //Extracting Each Num;
        int num = i, localSum = 0;
        // cout << "NUM " << num << endl;
        while (num)
        {
            int loc = num % 10;
            localSum = localSum + loc;
            num = num / 10;
        }
        if (localSum == sum)
        {
            if (flag == 1)
            {
                min = i;
                flag = 0;
            }
            max = i;
        }
    }
    if (min != -1 && max != -1)
    {
        cout << min << " " << max << endl;
    }
    else
    {
        cout << "-1 -1" << endl;
    }

    return 0;
}