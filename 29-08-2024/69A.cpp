#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int ans = 0;
    while (n--)
    {
        int x, y, z;
        cin >> x >> y >> z;

        ans += x + y + z;
    }

    if (ans == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
        
    return 0;
}
