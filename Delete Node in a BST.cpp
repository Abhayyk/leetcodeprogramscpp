class Solution {
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root == NULL)
            return root;
        if(key < root->val)
            root->left = deleteNode(root->left, key);
        else if(key > root->val)
            root->right = deleteNode(root->right, key);
        else {
            if(root->left == NULL && root->right == NULL)
                return NULL;
            else if(root->left != NULL && root->right == NULL)
                return root->left;
            else if(root->left == NULL && root->right != NULL)
                return root->right;
            else{
                root->val = getMax(root->left);
                root->left = deleteNode(root->left, root->val);
            }      
        }
        return root;  
    }
    int getMax(TreeNode* node){
        int max = node->val;
        while(node->right != NULL){
            max = node->right->val;
            node = node->right;
        }
        return max;
    }
};
