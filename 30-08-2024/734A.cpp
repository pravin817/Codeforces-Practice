#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    string s;
    cin >> s;

    int countOfA = 0, countOfD = 0;

    int length = s.length();

    for (int i = 0; i < length; ++i)
    {
        if (s[i] == 'A')
        {
            ++countOfA;
        }
        else
        {
            ++countOfD;
        }
    }

    if (countOfA == countOfD)
    {
        std::cout << "Friendship" << std::endl;
    }
    else if (countOfA > countOfD)
    {
        std::cout << "Anton" << std::endl;
    }
    else
    {
        std::cout << "Danik" << std::endl;
    }

    return 0;
}