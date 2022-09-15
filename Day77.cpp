int minSubset(vector<int> &arr,int N){
        
        sort(arr.begin(),arr.end());
        
        long long int sum1 = 0;
        long long int sum2 = 0;
        for(int i=0;i<N;i++) sum1+= arr[i];
        
        int count = 0;
        int i=N-1;
        while(i>=0){   
            sum2+=arr[i];
            sum1-=arr[i];
            count++;
            if(sum2>sum1) return count;
            i--;
        }
        return -1;
    }