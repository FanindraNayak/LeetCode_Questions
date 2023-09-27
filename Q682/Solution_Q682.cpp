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
    int calPoints(vector<string> &opr)
    {
        vector<int> temp;
        int ans = 0;

        for (int i = 0; i < opr.size(); i++)
        {
            if (opr[i] == "+")
            {
                temp.push_back(temp[temp.size() - 1] + temp[temp.size() - 2]);
            }
            else if (opr[i] == "C")
            {
                temp.pop_back();
            }
            else if (opr[i] == "D")
            {
                temp.push_back(temp[temp.size() - 1] * 2);
            }
            else
            {
                temp.push_back(stoi(opr[i]));
            }
        }

        for (auto pr : temp)
            ans += pr;

        return ans;
    }
};

int main()
{
    Solution sol;
    vector<string> arr = {"5", "2", "C", "D", "+"};
    int ans = sol.calPoints(arr);

    cout << ans;
    return 0;
}