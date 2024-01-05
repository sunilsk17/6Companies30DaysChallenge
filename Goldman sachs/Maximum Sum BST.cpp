/* https://leetcode.com/problems/maximum-sum-bst-in-binary-tree/ */
//Solution - Maximum Sum BST in Binary Tree
 class cont{
     public:
        int maxsum;
        int maxval;
        int minval;
    cont(int ms,int mx,int mi){
        maxsum=ms;
        maxval=mx;
        minval=mi;
    }
 };
class Solution {
public:
    int res;    
    cont solve(TreeNode* root){
        if(root==NULL){
            return cont(0,INT_MIN,INT_MAX);
        }

        auto left = solve(root->left);
        auto right=solve(root->right);

        if((root->val > left.maxval) && (root->val < right.minval)){
            int s=root->val+left.maxsum+right.maxsum;
            res=max(res,s);
            return cont(s,max(root->val,right.maxval),min(root->val,left.minval));
        }

        return cont(max(left.maxsum,right.maxsum),INT_MAX,INT_MIN);
    }
    int maxSumBST(TreeNode* root) {
        res=0;
        solve(root).maxsum;
        return res; 
    }
};
