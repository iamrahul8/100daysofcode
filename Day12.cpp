  int minLaptops(int N, int start[], int end[]) {

       vector<pair<int,int>>v(N);

       for(int i=0;i<N;i++){

           v[i]={start[i],end[i]};

       }

        sort(v.begin(),v.end());

            

        priority_queue<int,vector<int>,greater<int>>pq;

        int cnt=0;

        for(int i=0;i<N;i++){

            if(pq.size()==0)

             { pq.push(v[i].second);

               cnt++; 

             }  

            else if(pq.top()<=v[i].first)

             {

               pq.push(v[i].second);

               pq.pop();

             }

            else{

                cnt++;

                pq.push(v[i].second);

            }

        }

     return cnt;

 

    }