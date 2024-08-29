#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int count = 0;
    while (n > 0)
    {
        int lastDigit = n % 10;
        if (lastDigit == 4 || lastDigit == 7)
        {
            ++count;
        }

        n = n / 10;
    }

    n = count;

    count = 0;

    int count2 = 0;

    while (n > 0)
    {
        int lastDigit = n % 10;
        if (lastDigit == 4 || lastDigit == 7)
        {
            ++count;
        }

        ++count2;
        n = n / 10;
    }

    cout << count << " " << count2 << endl;
    if (count == count2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
