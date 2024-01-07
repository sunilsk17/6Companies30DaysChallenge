/* https://leetcode.com/problems/minimum-moves-to-equal-array-elements-ii/description/ */
//Solution - Minimum Moves to Equal Array Elements II
class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int ans = 0, length = nums.size();
        sort(nums.begin(), nums.end());
        int median = length / 2;
        for (int i = 0; i < length; i++) {
            ans += abs(nums[i] - nums[median]);
        }
        return ans;
    }
};
