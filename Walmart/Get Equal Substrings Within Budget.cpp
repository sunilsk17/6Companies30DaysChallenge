/* https://leetcode.com/problems/get-equal-substrings-within-budget/description/ */
//Solution - Get Equal Substrings Within Budget
class Solution {
public:
    int equalSubstring(string str, string tar, int maxCost) {

        int n = str.size();

        int left = 0;

        int curr_cost = 0;

        int maxi = 0;

        // apply sliding window

        for(int right = 0; right < n; right++)
        {

            curr_cost += abs(str[right] - tar[right]);

            while(left <= right && curr_cost > maxCost)
            {
                curr_cost -= abs(str[left] - tar[left]);

                left++;
            }

            maxi = max({maxi, right - left + 1});
        }

        return maxi;
    }
};
