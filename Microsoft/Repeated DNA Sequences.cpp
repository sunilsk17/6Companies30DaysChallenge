/* https://leetcode.com/problems/repeated-dna-sequences/description/ */
//Solution - Repeated DNA Sequences
class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        vector<string>ans;
        int i=0,j=0;
        int n=s.size();
        map<string,int>mp;
        string str="";
        while(i<n){
            if(str.length()<10 && j<n){
                str+=s[j];
                j++;
            }
            else if(str.length()>=10){
               ans.push_back(str);
               str.erase(str.begin());
               i++;
            }
            else{
                break;
            }
        }
        for(int i=0;i<ans.size();i++){
            mp[ans[i]]++;
        }
        vector<string>res;
        for(auto it:mp){
            if(it.second>1){
                res.push_back(it.first);
            }
        }
        return res;
    }
};
