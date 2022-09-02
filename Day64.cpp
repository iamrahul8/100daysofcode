int minimumCostOfBreaking(vector<int> vec1, vector<int> vec2, int m, int n){
       
       int vertical = 1;
       int horizental = 1;
       
       sort(vec1.begin() , vec1.end() , greater<int>());
       sort(vec2.begin() , vec2.end() , greater<int>());
       
       
       int i=0;
       int j=0;
       
       
       int cost = 0;
       
       
       while(i < m-1 && j < n-1  ){
           
           if(vec2[j] >= vec1[i] ){
               cost += vec2[j] * horizental;
               vertical++;
               j++;
           }
           
           else{
               cost += vec1[i] * vertical;
               horizental++;
               i++;
           }
       }
       
       
        while(i < m-1){
             
              cost += vec1[i] * vertical;
               horizental++;
               i++;
        }
        
        while(j < n-1){
             
               cost += vec2[j] * horizental;
               vertical++;
               j++;
        }
        
        return cost;
   }