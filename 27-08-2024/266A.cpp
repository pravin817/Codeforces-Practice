#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    string s;
    cin >> n >> s;

    string newStr = "";

    char prev = s[0];
    newStr = s[0];
    for (int i = 0; i < n; ++i)
    {
        if (prev == s[i])
        {
            continue;
        }
        else
        {
            newStr += s[i];
            prev = s[i];
        }
    }

    int newLength = newStr.length();

    int ans = n - newLength;

    cout << ans << endl;

    return 0;
}