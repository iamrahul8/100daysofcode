//Smallest sum contiguous subarray
//

public:
  int smallestSumSubarray(vector<int>& a){
      //Code here
      int min_far = INT_MAX;
      int minVal = 0 ;
      
      for(int i =0 ; i < a.size(); i++){
          minVal += a[i];
          
          if(minVal < min_far)
            min_far = minVal;
        
          if(minVal > 0)
            minVal = 0 ;
      }
      
      return min_far;
  }