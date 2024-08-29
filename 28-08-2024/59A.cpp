#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int countOfLower = 0;
    int countOfUpper = 0;

    int length = s.length();

    for (int i = 0; i < length; ++i)
    {
        char ch = s[i];

        if (ch >= 'a' && ch <= 'z')
            ++countOfLower;
        else
            ++countOfUpper;
    }

    if (countOfLower >= countOfUpper)
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    else
        transform(s.begin(), s.end(), s.begin(), ::toupper);

    cout << s << endl;
    return 0;
}
