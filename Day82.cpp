 long long int numberOfSquares(long long int base)
    {
        long long int an=0;
        long long int b=0;
        if(base%2==0){
            b=base-2;
        }
        else{
            b=base-3;
        }
        an=b/2;
        an=(an*(an+1))/2; //formulae n*(n+1)/2 to get first n integrrs
        
        return an;
        //code here
    }