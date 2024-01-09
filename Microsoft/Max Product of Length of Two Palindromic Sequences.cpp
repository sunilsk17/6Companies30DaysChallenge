/* https://leetcode.com/problems/maximum-product-of-the-length-of-two-palindromic-subsequences/description/ */
//Solution - Maximum Product of the Length of Two Palindromic Subsequences
class Solution {
public:
    int ans;
    void dfs(int i,string& s,string& s1,string& s2){
        if(i==s.size()){
            ans=max(ans,(isPalindrome(s1)*isPalindrome(s2)));
            return;
        }
        //choose ith char form s1
        s1.push_back(s[i]);
        dfs(i+1,s,s1,s2);
        //bactrack
        s1.pop_back();
        //choose ith char form s2
        s2.push_back(s[i]);
        dfs(i+1,s,s1,s2);
        s2.pop_back();

        dfs(i+1,s,s1,s2);
    }
    int isPalindrome(string s){
        int n=s.size();
        int i=0,j=n-1;
        while(i<=j){
            if(s[i++]!=s[j--]){
                return 0;
            }
        }
        return n;
    }
    int maxProduct(string s) {
        ans=0;
        string s1="",s2="";
        dfs(0,s,s1,s2);
        return ans;
    }
};
