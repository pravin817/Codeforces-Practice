#include <iostream>
using namespace std;

int main()
{
    int n;
    std::cin >> n;

    int count = 0;

    while (n--)
    {
        std::string str;
        std::cin >> str;

        if ((str[0] == '-' && str[1] == '-') || (str[1] == '-' && str[2] == '-'))
        {
            --count;
        }
        else
        {
            ++count;
        }
    }

    std::cout << count << std::endl;
    return 0;
}