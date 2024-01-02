/* https://leetcode.com/problems/letter-combinations-of-a-phone-number/ */
//Solution -  Letter Combinations of a Phone Number
class Solution {
public:
    vector<vector<char>> arr={
        {},{},
        {'a','b','c'},
        {'d','e','f'},
        {'g','h','i'},
        {'j','k','l'},
        {'m','n','o'},
        {'p','q','r','s'},
        {'t','u','v'},
        {'w','x','y','z'}
    };
    vector<string> ans;

    void help(int ind,string digits,string temp){
        if(ind==digits.size()){
            ans.push_back(temp);
            return;
        }
        for(char x:arr[digits[ind]-'0']){
            temp+=x;
            help(ind+1,digits,temp);
            temp.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        if(digits.size()==0)return {};
        string temp="";
        help(0,digits,temp);
        return ans;
    }
};
