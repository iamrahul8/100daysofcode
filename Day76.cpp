//Power Of 2 and Subsequences
int check(int a) {
        return !(a & (a-1));
    }
    long long int pw(long long num, long long power) {
        int mod = 1e9 + 7;
        if(power == 0) {
            return 1;
        }
        if(power % 2 == 0) {
            return (((pw(num, power / 2)) % mod) * ((pw(num, power / 2)) % mod)) % mod;
        }
        else 
            return ((num % mod) * (((pw(num, power / 2)) % mod) * ((pw(num, power / 2)) % mod)) % mod) % mod;
    }
    long long numberOfSubsequences(int N, long long A[]){
        // code here
        long long ct = 0;
        for(int i = 0; i < N; i++) {
            ct += check(A[i]);
        }
        long long ans = pw(2,ct)-1;
        return ans;
    }