#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    cin >> s;

    vector<int> nums;

    stringstream ss(s);

    string item;

    while (getline(ss, item, '+'))
    {
        nums.push_back(stoi(item));
    }

    sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size(); ++i)
    {
        if (i != 0)
        {
            cout << "+";
        }
        std::cout << nums[i];
    }
    cout << endl;
    return 0;
}