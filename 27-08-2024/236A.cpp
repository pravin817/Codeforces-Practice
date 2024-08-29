#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int count = 0;

    int length = s.size();

    vector<int> v(26, 0);

    for (int i = 0; i < length; ++i)
    {
        v[s[i] - 'a']++;
    }

    for (int i = 0; i < 26; ++i)
    {
        if (v[i] >= 1)
        {
            ++count;
        }
    }

    if (count & 1)
    {
        std::cout << "IGNORE HIM!" << std::endl;
    }
    else
    {
        std::cout << "CHAT WITH HER!" << std::endl;
    }

    return 0;
}