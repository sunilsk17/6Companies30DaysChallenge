/* https://leetcode.com/problems/combination-sum-iii/ */
//Solution - Combination Sum III
class Solution {
public:
    void solve(int ind,vector<int>&nums,int sum,vector<int>&ds,vector<vector<int>>&ans,int k){
        if(ds.size()==k){
            if(sum==0){
                ans.push_back(ds);
            }
            return;
        }
        for(int i=ind;i<nums.size();i++){
            if(i>ind && nums[i]==nums[i-1])continue;
            if(nums[i]>sum)break;
            ds.push_back(nums[i]);
            solve(i+1,nums,sum-nums[i],ds,ans,k);
            ds.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>nums;
        for(int i=1;i<=9;i++){
            nums.push_back(i);
        }
        vector<int>ds;
        vector<vector<int>>ans;
        solve(0,nums,n,ds,ans,k);
        return ans;

    }
};


    
    
