 public:
    vector<int>a;
   void f(Node *root){
       //return Inorder traversal value
       if(root==NULL)
       return;
       f(root->left);
       a.push_back(root->data);
       f(root->right);
   }
   Node * bToDLL(Node *root){
       // your code here
       Node *h;
       f(root); 
       ///then i just traverse and made a dd list//
       Node *u=newNode(a[0]);
       u->left=NULL;
       h=u;
       for(int i=1;i<a.size(); i++){
          Node *r=newNode(a[i]);
          u->right=r;
          r->left=u;
          u=r;
       }
       u->right=NULL;
       return h;
   }