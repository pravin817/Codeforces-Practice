#include <bits/stdc++.h>
using namespace std;

int main()
{

    int m, n;
    cin >> m >> n;

    int count = 0;
    while (!(m > n))
    {
        ++count;

        m = 3 * m;
        n = 2 * n;
    }

    cout << count << endl;

    return 0;
}