#include <iostream>
using namespace std;

bool isPalindrome(int number)
{
    int sum = 0;
    int copy = number;
    if (number < 0)
    {
        return false;
    }
    while (copy)
    {
        int num = copy % 10;
        sum = (sum * 10) + num;
        copy = copy / 10;
    }
    if (sum == number)
    {
        return true;
    }
    return false;
}
int main()
{
    int number;
    cin >> number;
    if (isPalindrome(number))
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
    return 0;
}