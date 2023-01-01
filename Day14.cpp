 vector<int> asteroidCollision(int N, vector<int> &a) {

        // code here

        vector<int>v;

        stack<int>st;

        for(int i=0;i<N;i++){

            if(a[i]>0) st.push(a[i]);

            else{

                if(st.empty()) v.push_back(a[i]);

                else{

                    while(!st.empty() && -1*a[i]>st.top()) st.pop();

                    if(!st.empty() && -1*a[i]==st.top()) st.pop();

                    else if(st.empty()) v.push_back(a[i]);

                }

            }

        }

        vector<int>temp;

        while(!st.empty()){

            temp.push_back(st.top());

            st.pop();

        }

        reverse(temp.begin(),temp.end());

        v.insert(v.end(),temp.begin(),temp.end());

        return v;

    }