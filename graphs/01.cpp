
int SUM_OF_NODES(TreeNode *root){
    if(root==NULL) return 0;
    int l = SUM_OF_NODES(root->left);
    int r = SUM_OF_NODES(root->right);
    return root->val + l + r;
}
