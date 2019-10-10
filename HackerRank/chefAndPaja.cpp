#include <iostream>
using namespace std;
int main()
{
    long long int t, x, y, k;
    int chef = 0;
    cin >> t;
    while (t--)
    {
        cin >> x >> y >> k;
        chef = ~(chef);
        if (chef == 0)
        {
            cout << "Chef" << endl;
        }
        else
        {
            cout << "Paja" << endl;
        }
    }
    return 0;
}