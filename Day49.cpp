//Longest Sub-Array with Sum K
//function
 int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        unordered_map<int, int> mp;
        int sum = 0;
        int ans = 0;
        for(int i = 0; i < N; i++){
            sum += A[i];
            if(mp.count(sum) == false){
                mp[sum] = i;
            }
            if(sum == K){
                ans = max(ans, i + 1);
            }
            else if(mp.count(sum - K)){
                ans = max(ans, i - mp[sum - K]);
            }
        }
        return ans;
    } 