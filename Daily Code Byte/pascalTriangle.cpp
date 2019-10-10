#include <iostream>
using namespace std;
void printSpace(int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i; j < n - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    // cout << "Fact = " << fact << endl;
    return fact;
}
int printNCR(int n, int r)
{
    int ncr = factorial(n) / (factorial(n - r) * factorial(r));
    // cout << "NCR = " << ncr << endl;
    return ncr;
}
// void printPascal(int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             for (int k = j; k < n - 1; k++)
//             {
//                 cout << " ";
//             }
//             cout << endl;
//             cout << printNCR(i, j) << " ";
//         }
//     }
//     cout << endl;
// }
// }
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << printNCR(i, j) << " ";
        }
        cout << endl;
    }
    return 0;
}