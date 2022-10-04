   long long int numberOfPaths(int m, int n){
        // code here 
        long long int mod = 1e9 + 7;
        vector<long long int>prev(n,1);
        for(long long int i = 1; i < m; i++){
            for(long long int j = 1; j < n; j++){
                prev[j] = (prev[j - 1] + prev[j])%mod;
            }
        }
        return prev[n - 1];
        
    }