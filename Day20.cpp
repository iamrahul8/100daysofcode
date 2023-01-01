public:
    //Function to count subarrays with sum equal to 0.
     long long int findSubarray(vector<long long int> &arr, int n ) {
        unordered_map<long long, long long> mp;
        mp[0] = 1;
        long long currSum = 0;
        long long ans = 0;
        for(int i = 0; i < n; i++){
            currSum += arr[i];
            ans += mp[currSum];
            mp[currSum]++;
        }
        return ans;
    }