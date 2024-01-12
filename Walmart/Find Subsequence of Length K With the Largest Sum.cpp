/* https://leetcode.com/problems/find-subsequence-of-length-k-with-the-largest-sum/description/ */
//Solution - Find Subsequence of Length K With the Largest Sum
class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) 
    {
        if(nums.size()==k)
        return nums;
        priority_queue<pair<int,int>>pq;
        for(int i=0;i<nums.size();i++)
        {
            pq.push(make_pair(nums[i],i));
        }
        vector<pair<int,int>>v;
        while(k--)
        {
            v.push_back({pq.top().second,pq.top().first});
            pq.pop();
        }
        sort(v.begin(),v.end());
        vector<int> ans;
        for(auto i :v)
        {
            ans.push_back(i.second);
        }
        return ans;
    }
};
