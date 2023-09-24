#include <iostream>
#include <vector>
#include <string>

using namespace std;

/**
 * Class to get the function max odd binary
 * Todo: Describe the solution in detail
 */

class Solution
{
public:
    string maxBinary(string &s)
    {
        string ans = "";

        int count = 0;
        int n = s.length();
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
                count++;
        }

        for (int i = 0; i < n - 1; i++)
        {
            if (count > 1)
            {
                ans += "1";
                count--;
            }
            else
            {
                ans += "0";
            }
        }

        if (count == 1)
            ans += "1";
        else
            ans += "0";

        return ans;
    }
};

int main()
{
    Solution sol;
    string s = "010";
    string ans = sol.maxBinary(s);
    cout << ans;
    return 0;
}