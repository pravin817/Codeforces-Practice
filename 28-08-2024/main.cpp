#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    while (n--)
    {
        std::string word;
        std::cin >> word;

        int lengthOfWord = word.size();

        if (lengthOfWord > 10)
        {
            std::cout << word[0] << lengthOfWord - 2 << word[lengthOfWord - 1] << std::endl;
        }
        else
        {
            std::cout << word << std::endl;
        }
    }
    return 0;
}