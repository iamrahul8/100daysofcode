   int minimumSwaps(int c[],int v[],int n,int k,int b,int T)

    {

            // code here

            int cnt=0;

            int swaps=0;

            for(int i=n-1;i>=0;i--){

                int dist=b-c[i];

                int speed=v[i];

                int tt=dist/speed;

                if(tt<=T)cnt++,swaps+=(n-cnt-i);

                if(cnt>=k)break;

            }

            if(cnt>=k)return swaps;

            else return -1;

    }