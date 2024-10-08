class Solution {
public:
    void inorder(TreeNode* root, vector<int> & arr){
        if(!root) return;
        inorder(root->left, arr);
        arr.push_back(root->val);
        inorder(root->right, arr);
    }
    bool isValidBST(TreeNode* root) {
        vector<int> arr;
        inorder(root, arr);
        int n = arr.size();
        for(int i=0;i<arr.size();i++){
            if(i>0 && arr[i]<=arr[i-1]) return false;
            if(i<n-1 && arr[i]>=arr[i+1]) return false;
        }
        return true;
    }
};
