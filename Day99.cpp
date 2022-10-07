Node* _flatten(Node* root)
    {
        if(!root) return root;
        Node* left=_flatten(root->left);
        Node* right=_flatten(root->right);
        root->right=left;
        root->left=NULL;
        Node* head=root;
        while(left)
        {
            left=left->right;
            head=head->right;
        }
        head->right=right;
        return root;
    }
    void flatten(Node *root)
    {
        //code here
        root=_flatten(root);
    }