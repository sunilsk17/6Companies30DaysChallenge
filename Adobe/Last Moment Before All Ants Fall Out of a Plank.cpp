/* https://leetcode.com/problems/last-moment-before-all-ants-fall-out-of-a-plank/ */
//Solution - Last Moment Before All Ants Fall Out of a Plank
class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        int ans1=0,ans2=0;
        for(int i=0;i<left.size();i++){
            ans1=max(ans1,left[i]);
        }
        for(int i=0;i<right.size();i++){
            ans2=max(ans2,n-right[i]);
        }
        return max(ans1,ans2);
    }
};
