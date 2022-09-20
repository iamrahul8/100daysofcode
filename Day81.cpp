 vector<int> leftSmaller(int n, int a[]){
        vector<int> ans(n);
        ans[0] = -1;
        stack<int> st;
        
        for(int i = 1; i< n; i++){
            if(a[i] > a[i-1]){
                ans[i] = a[i-1];
                st.push(a[i-1]);
            } 
            else{
                if(!st.empty() && a[i] > st.top()) ans[i] = st.top();
                else{
                    while(!st.empty() && st.top() >= a[i]){
                        st.pop();
                    }
                    if(!st.empty())
                        ans[i] = st.top();
                    else ans[i] = -1;
                }
            }
        }
        
        return ans;
    }