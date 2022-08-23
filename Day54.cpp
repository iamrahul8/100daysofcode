bool helper(Node* ,Node* );
bool IsFoldable(Node* root)
{
    // Your code goes here
    if(!root)
    return true;
    return(helper(root->left,root->right));
}

bool helper(Node* root1,Node* root2)
{
    if(root1==NULL&&root2==NULL)
    return true;
    if(root1&&!root2)
    return false;
    if(!root1&&root2)
    return false;
    bool check1=helper(root1->left,root2->right);
    if(!check1)
    return false;
    bool check2=helper(root1->right,root2->left);
    return check2;
}