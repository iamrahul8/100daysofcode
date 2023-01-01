//https://practice.geeksforgeeks.org/problems/akku-and-binary-numbers0902/1

vector<long long>pre;
    void precompute()
    {
       for(int i=0;i<63;i++){
           for(int j=i+1;j<63;j++){
               for(int k=j+1;k<63;k++){
                   long long tmp=(1ll<<i)+(1ll<<j)+(1ll<<k);
                   pre.push_back(tmp);
               }
           }
       }
       sort(pre.begin(),pre.end());
    }
    
    long long solve(long long l, long long r){
    int hi=upper_bound(pre.begin(),pre.end(),r)-pre.begin();
    int lo=lower_bound(pre.begin(),pre.end(),l)-pre.begin();
    return hi-lo;
    }