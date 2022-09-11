// Function to find ceil of a given input in BST. If input is more 
// than the max key in BST, return -1 
int sum(Node* root, int k) {
   // Your code here
    int total=0;
    priority_queue<int,vector<int>,greater<int>>pq;
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        Node*temp=q.front();
        q.pop();
        pq.push(temp->data);
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right)
        {
            q.push(temp->right);
        }
    }
    for(int i=1;i<=k;i++){
        total+=(pq.top());
        pq.pop();
    }
    return total;
   
} 