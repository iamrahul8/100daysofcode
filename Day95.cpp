 int sumOfAll(int l, int r)
    {
        int sum = 0;

        for(int i = l; i<=r; i++){
            int temp = sum;

            for(int j = i-1; j>1; j--){
                if(i%j==0){

                    if(isprime(j)){
                        sum += j;
                    }
                } 
            }
            
            //if sum == temp then i is prime
            if(sum == temp)
            sum += i;
        }
        
        
        return sum;
    }
    
 bool isprime(int n){
        
        for(int i = 2; i*i<=n; i++){
            if(n%i==0){
                return false;
            }
        }
        
        return true;
    }