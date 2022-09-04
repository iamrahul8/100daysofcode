//Minimum time to fulfil all orders

    private:
    int findnum(int i,int tym){
        i=2*(tym/i);
        int k=0;
        for(int j=1;j*j<=i;j++){
            if(j*(j+1)<=i){
                k=j;
            }
        }
        return k;
    }
    int  numofpossibledonuts(vector<int>arr,int Tym,int n){
        int donuts=0;
        for(int i=0;i<n; i++){
            donuts+=findnum(arr[i],Tym);
        }
        return donuts;
    }
    public:
    int findMinTime(int donut, vector<int>arr, int l){
        //write your code here
        sort(arr.begin(),arr.end());
        int s=0;
        int e=arr[0]*((donut*(donut+1))/2);
        int ans=-1;
        while(s<=e){
            int m=s+((e-s)/2);
            int k=numofpossibledonuts(arr,m,l);
           if(k<donut){
                s=m+1;
            } else
             e=m-1;
        }
        return s;
    }