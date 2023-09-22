#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    double getMedian(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> arr;
        int n1 = nums1.size();
        int n2 = nums2.size();

        for (auto pr : nums1)
            arr.push_back(pr);
        for (auto pr : nums2)
            arr.push_back(pr);

        sort(arr.begin(), arr.end());
        double med = 0.0;

        int total = n1 + n2;
        int mid_of_arr = total / 2;

        med = arr[mid_of_arr];

        if (total % 2 != 0)
        {
            return med;
        }
        else
        {

            med = med + arr[mid_of_arr - 1];
            med = med / 2;

            return med;
        }
    }
};

int main()
{
    Solution sol;

    vector<int> nums1 = {1, 3};
    vector<int> nums2 = {2};

    double ans = sol.getMedian(nums1, nums2);

    cout << ans;

    return 0;
}