long long findMinSum(vector<int> &A,vector<int> &B,int N){
      long long ans=0;
       sort(A.begin(),A.end());
       sort(B.begin(),B.end());
       for(long long i=0;i<N;i++)
       ans+=(abs(A[i]-B[i]));
       return ans;  
    }