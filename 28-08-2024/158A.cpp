#include <iostream>
using namespace std;

int main()
{
    int n, k;
    int count = 0;

    std::cin >> n;
    std::cin >> k;

    int arr[n];

    int compareValue = 0;

    for (int i = 0; i < n; ++i)
    {
        std::cin >> arr[i];
    }

    compareValue = arr[k - 1];

    for (int i = 0; i < n; ++i)
    {
        if (arr[i] >= compareValue && arr[i] > 0)
            ++count;
    }

    std::cout << count << std::endl;

    return 0;
}