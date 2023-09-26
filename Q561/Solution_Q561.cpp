#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>

using namespace std;

class Solution
{
public:
    int arrPairSum(vector<int> &num)
    {
        int ans = 0;

        for (int i = 0; i < num.size(); i = i + 2)
        {
            ans += num[i];
        }

        return ans;
    }
};

int main()
{
    Solution sol;

    vector<int> num = {1, 4, 3, 2};

    int ans = sol.arrPairSum(num);

    cout << ans << endl;

    return 0;
}