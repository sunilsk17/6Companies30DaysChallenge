/* https://leetcode.com/problems/random-flip-matrix/ */
// Solution -  Random Flip Matrix
class Solution {
public:
    int m,n;
    int i,j;
    Solution(int m, int n) {
        this->m=m;
        this->n=n;
        i=0;
        j=0;
    }
    
    vector<int> flip() { 
        vector<int>ans={i,j};
        j=j+1;
        if(j==n){
            j=0;
            i+=1;
            if(i==m){
                i=0;
            }
        }
        return ans;
        
    }
    
    void reset() {
  
    }
};
