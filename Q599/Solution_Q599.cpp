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
    vector<string> findRestaurant(vector<string> &list1, vector<string> &list2)
    {
        int i = 0, j = 0, min_index = INT_MAX;
        int n = list1.size(), ma = list2.size();
        vector<string> ans;
        unordered_map<string, int> m;

        for (int i = 0; i < n; i++)
        {
            m[list1[i]] = i;
        }

        for (int i = 0; i < ma; i++)
        {
            if (m.find(list2[i]) != m.end())
            {
                min_index = min(min_index, (i + m[list2[i]]));
            }
        }

        cout << min_index << endl;
        for (int i = 0; i < ma; i++)
        {
            if (m.find(list2[i]) != m.end())
            {
                if (min_index == (i + m[list2[i]]))
                {
                    ans.push_back(list2[i]);
                }
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
    Solution sol;
    vector<string> one = {"Shogun", "Tapioca Express", "Burger King", "KFC"}, two = {"KFC", "Shogun", "Burger King"};
    vector<string> ans = sol.findRestaurant(one, two);
    print(ans);
    return 0;
}