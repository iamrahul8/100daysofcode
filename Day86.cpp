 int swapBitGame(long long n){
        // code here 

        int x = 0;

        while (n)

        {

            if(n%2!=0)

            {

                x++;

            }

            n=n/2;

        }

        if(x%2!=0)

        {

            return 1;

        }

        else 

        {

            return 2;

        }

    }