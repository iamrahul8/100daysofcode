string digitsNum(int N)
	{
	    int p=N;
	    string num="";
	    while(N>0){
	        if(N>=9){
	            N-=9;
	            num+='9';
	        }
	        else{
	            num+=(N+'0');
	            N=0;
	        }
	    }
	    reverse(num.begin(),num.end());
	    for(int i=0;i<p;i++){
	        num+='0';
	    }
	    return num;
	}