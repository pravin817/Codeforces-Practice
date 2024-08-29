#include <iostream>
using namespace std;

int main()
{
    int m,n;

    cin>>m>>n;

    int dominoPieceArea = 2;
    int rectangularBoardArea = m*n;

    int count = rectangularBoardArea / dominoPieceArea;

    std::cout<<count<<std::endl;

    return 0;
}