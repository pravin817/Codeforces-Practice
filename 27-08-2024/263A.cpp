#include <iostream>
using namespace std;

int main()
{

    int matrix[5][5];

    int getX = 0;
    int getY = 0;

    int expectedX = 2;
    int expectedY = 2;
    
    for (int i = 0; i < 5; ++i)
    {
        for (int j = 0; j < 5; ++j)
        {
            int value;
            cin >> value;
            matrix[i][j] = value;

            if (value == 1)
            {
                getX = i;
                getY = j;
            }
        }
    }

    int ans = abs(expectedX - getX) + abs(expectedY - getY);

    cout<<ans<<endl;

    return 0;
}