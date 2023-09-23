#include <iostream>
#include <queue>
#include <string>

using namespace std;

class Solution
{
public:
    vector<string> findRelativeRanks(vector<int> &score)
    {
        vector<string> sa = {"Gold Medal", "Silver Medal", "Bronze Medal"};
        priority_queue<pair<int, int>> an;
        int i = 0;
        for (i = 0; i < score.size(); i++)
        {
            an.push({score[i], i});
        }
        vector<string> ans(score.size(), "");
        i = 0;
        while (!an.empty())
        {
            if (i < 3)
            {

                ans[an.top().second] = sa[i];
                i++;
                an.pop();
            }
            else
            {

                ans[an.top().second] = to_string(i + 1);
                i++;
                an.pop();
            }
        }

        return ans;
    }
};

void print(vector<string> &arr)
{
    cout << endl;
    for (auto pr : arr)
    {
        cout << pr << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> score = {5, 4, 3, 2, 1};
    Solution sol;
    vector<string> ans = sol.findRelativeRanks(score);

    print(ans);

    return 0;
}
