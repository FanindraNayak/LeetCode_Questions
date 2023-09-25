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
    char findTheDifference(string s, string t)
    {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        char ans;
        int n = s.length(), m = t.length();
        for (int i = 0; i < n; i++)
        {
            if (s[i] != t[i])
            {
                ans = t[i];
                return ans;
            }
        }
        return t[m - 1];
    }
};

int main()
{
    Solution sol;

    char ans = sol.findTheDifference("abc", "cabd");
    cout << ans;

    return 0;
}