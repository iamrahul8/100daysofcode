//Counting elements in two arrays

vector<int> countEleLessThanOrEqual(int arr1[], int arr2[],        int m, int n)
                         
   {
   //Your code goes here
         vector<int>a(m);
         sort(arr2,arr2+n);
       for(int i=0;i<m;i++){
           int x=upper_bound(arr2,arr2+n,arr1[i])-arr2;
           a[i]=x;
       }
       return a;
   }