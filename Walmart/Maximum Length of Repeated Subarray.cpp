/* https://leetcode.com/problems/maximum-length-of-repeated-subarray/description/ */
//Solution - Maximum Length of Repeated Subarray
class Solution {
public:
    int LCSubStr(vector<int>& X, vector<int>& Y, int n, int m){
   int LCSuff[n + 1][m + 1];
    int result = 0; 
    for (int i = 0; i <= n; i++){
        
        for (int j = 0; j <= m; j++){
            if (i == 0 || j == 0)
                LCSuff[i][j] = 0;
 
            else if (X[i - 1] == Y[j - 1]) {
                LCSuff[i][j] = LCSuff[i - 1][j - 1] + 1;
                result = max(result, LCSuff[i][j]);
            }
            else
                LCSuff[i][j] = 0;
        }
    }
    return result;
}

    int findLength(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size(), m = nums2.size();
        
        return LCSubStr(nums1,nums2,n,m);
    }
};
