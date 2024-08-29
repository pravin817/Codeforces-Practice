#include <iostream>
using namespace std;

int main()
{

    string s1;
    string s2;

    cin >> s1;
    cin >> s2;

    int ans = 0;

    int length = s1.size();

    for (int i = 0; i < length; ++i)
    {
        char chars1 = s1[i];
        char chars2 = s2[i];

        chars1 = toupper(chars1);
        chars2 = toupper(chars2);

        if (chars1 > chars2)
        {
            ans = 1;
            break;
        }
        else if (chars1 < chars2)
        {
            ans = -1;
            break;
        }
    }

    cout << ans << endl;

    return 0;
}