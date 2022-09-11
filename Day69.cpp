int isStackPermutation(int n,vector<int> &a,vector<int> &b){
        queue<int>q1;
        queue<int>q2;
        stack<int>stk;
        for(auto i:a)
            q1.push(i);
            
        for(auto i:b)
            q2.push(i);
            
        while(!q1.empty()){
            int t=q1.front();
            q1.pop();
            if(t==q2.front()){
                q2.pop();
                
                
                while(!stk.empty()){
                    if(stk.top()==q2.front()){
                        stk.pop();
                        q2.pop();
                    }
                    else
                        break;
                }
            }
            else
                stk.push(t);
        }
        
        if(q1.empty()&&stk.empty())
            return 1;
        else
            return 0;
        
    }