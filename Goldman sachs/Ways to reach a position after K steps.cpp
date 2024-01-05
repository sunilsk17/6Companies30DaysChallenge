/* https://leetcode.com/problems/number-of-ways-to-reach-a-position-after-exactly-k-steps/ */
//Solution - Number of Ways to Reach a Position After Exactly k Steps
class Solution {
    int mod = 1e9 + 7;
    long long solve(int curr, int endPos, int k, vector<vector<int>>& dp){
        if(k == 0){
            return curr==endPos;
        }
        if(dp[999+curr][k] != -1){
            return dp[999+curr][k];
        }
        long long forw = solve(curr+1,endPos,k-1,dp);
        long long back = solve(curr-1,endPos,k-1,dp);
        return dp[999+curr][k] = (forw+back)%mod;
    }
public:
    int numberOfWays(int startPos, int endPos, int k) {
        vector<vector<int>> dp(3000,vector<int>(k+1,-1));
        return solve(startPos,endPos,k,dp)%mod;
    }
};
