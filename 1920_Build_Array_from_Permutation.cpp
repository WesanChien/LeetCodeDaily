#include <iostream>
#include <vector>
using namespace std;

class Solution {
    public:
        vector<int> buildArray(vector<int>& nums) {
            vector<int> ans(nums.size());
            for(int i = 0; i < nums.size(); i++){
                ans[i] = nums[nums[i]];
            }
            return ans;
        }
};

int main() {
    Solution solution;
    vector<int> nums1 = {0, 2, 1, 5, 3, 4};
    vector<int> ans = solution.buildArray(nums1);
    for (int i : ans) {
        cout << i << " ";
    }
    cout << endl;
    vector<int> nums2 = {5, 0, 1, 2, 3, 4};
    vector<int> ans2 = solution.buildArray(nums2);
    for (int i : ans2) {
        cout << i << " ";
    }
    return 0;
}