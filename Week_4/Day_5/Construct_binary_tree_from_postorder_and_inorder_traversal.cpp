/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int index=0;

    int search(vector<int>& inorder,int left,int right,int vall){
        for(int i=left;i<=right;i++){
            if(inorder[i]==vall) return i;
        }
        return -1;
    }
    TreeNode* helper(vector<int>& preorder, vector<int>& inorder,int left,int right){
        if (left>right) return NULL;
        TreeNode* root=new TreeNode(preorder[index]);
        int iindex=search(inorder,left,right,preorder[index]);
        index++;
        root->left=helper(preorder,inorder,left,iindex-1);
        root->right=helper(preorder,inorder,iindex+1,right);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        
        return helper(preorder,inorder,0,inorder.size()-1);

        
    }
};
