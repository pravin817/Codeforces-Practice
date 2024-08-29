#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    while (k--)
    {
        int lastDigit = n % 10;

        if (lastDigit == 0)
        {
            n = n / 10;
        }
        else
        {
            n = n - 1;
        }
    }

    cout << n << endl;
    return 0;
}
