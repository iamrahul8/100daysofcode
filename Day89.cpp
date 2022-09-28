long long minCost(long long arr[], long long n) {

       

        priority_queue<long long , vector<long long> , greater<long long>> pqueue;  // Min Priority queue

 

        for(long long i=0;i<n;i++){

               pqueue.push(arr[i]);

        }

   

        long long first,second;

        long long finalSum =0;

     

        while(pqueue.size() >0){

    

            long long first = pqueue.top();

            pqueue.pop();

     

             if(pqueue.size() >0){

                

                    long long second = pqueue.top();

                    pqueue.pop();

                   

                    long long sum = first + second;

                 

                    finalSum += sum;

                    pqueue.push(sum);

                    

                }

          

        }

 

        return finalSum;

    }