vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target)
   {
       // code here
       vector<pair<int, int>>set;
       Node *p=head;
       Node*q=head;
       while(q->next)
       {
           q=q->next;
       }
       
       while(p->data<q->data)
       {
           if(p->data+q->data==target)
           {
               set.push_back(make_pair(p->data,q->data));
               p=p->next;
               q=q->prev;
           }
           else if(p->data+q->data>target)
           {
               q=q->prev;
           }
           else
           {
               p=p->next;
           }
       }
       return set;
   }