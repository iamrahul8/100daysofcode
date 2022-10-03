  int minChar(string str){
        //Write your code here
        
          int n=str.size();
        int t=0;
        int e=n-1;
        int e2=e;
        int count=0;
        while(t<e){
            if(str[t] == str[e]){
                t++;
                e--;
            }
            else{
                count++;
                t=0;
                e2--;
                e=e2;
            }
        }
        return count;
    }