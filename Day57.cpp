long long int  countPS(string str)
    {   int n=str.size();   
        
        long long int m=1000000007;
        vector<vector<long long int>> dp(n,vector<long long int>(n,0));
        for(int i=0;i<n;i++){
            dp[i][i]=1;
            
        }
        
        
        
        for(int i=1;i<n;i++){
            for(int j=0;j+i<n;j++){
               if(str[j]==str[j+i]){
                   dp[j][j+i]=(1+(dp[j+1][j+i])+(dp[j][j+i-1]))%m;
                   
               }
               else{
                   dp[j][j+i]=(((dp[j+1][j+i])+(dp[j][j+i-1]))-(dp[j+1][j+i-1]) +m)%m;
               }
              
               
            }
        }
         
        return dp[0][n-1];
       
    }