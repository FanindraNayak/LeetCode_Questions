#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>

using namespace std;

class Solution
{
public:
    int numMatchingSubseq(string &s, vector<string> &words)
    {
        unordered_map<string, int> m;

        for (string pr : words)
            m[pr]++;

        int ans = 0;

        for (auto pr : m)
        {
            string word = pr.first;
            if (isSeq(s, word))
            {
                ans = ans + pr.second;
            }
        }

        return ans;
    }

private:
    bool isSeq(string &s, string &isSeq)
    {

        int a = 0;

        for (int i = 0; i < s.length(); i++)
        {
            if (isSeq[a] == s[i])
            {
                a++;
            }
        }

        if (a == isSeq.length())
            return true;

        return false;
    }
};

int main()
{
    Solution sol;

    vector<string> words = {"ahjpjau", "ja", "ahbwzgqnuk", "tnmlanowax"};
    string s = "dsahjpjauf";

    int ans = sol.numMatchingSubseq(s, words);

    cout << ans;

    return 0;
}