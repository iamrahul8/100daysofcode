 public:
    // Function to find largest subtree sum.
    int ans=INT_MIN;
    int f(Node* root){
        if(root==NULL){
            return  0;
        }
        int left=f(root->left);
        int right=f(root->right);
        if(left==0 and right==0){
            ans=max(ans,root->data);
            return root->data;
        }
        int r=max(root->data+left+right,max(left,right));
        ans=max(r,ans);
        return left+right+root->data;
    }
    int findLargestSubtreeSum(Node* root)
    {
        //Write your code here
        int a=f(root);
        return ans;
    }