//Sum of two large numbers
string findSum(string x, string y) {
        // Your code goes here
        long long i=x.size()-1;
        long long j=y.size()-1;
        string res="";
        long long carry=0;
        while(i>=0&&j>=0)
        {
           stringstream ss1,ss2;
           int a,b;
           ss1<<x[i];
           ss2<<y[j];
           ss1>>a;ss2>>b;
           long long ans=a+b+carry;
           carry=ans/10;
           res.append(to_string(ans%10));
           i--;
           j--;
        }
        
        if(i==-1&&j!=-1)
        {
            while(j>=0)
            {
                stringstream ss;
                int a;
                ss<<y[j];
                ss>>a;
                long long ans=a+carry;
                carry=ans/10;
                res.append(to_string(ans%10));
                j--;
            }
        }
        else if(i!=-1&&j==-1)
        {
            while(i>=0)
            {
                stringstream ss;
                int a;
                ss<<x[i];
                ss>>a;
                long long ans=a+carry;
                carry=ans/10;
                res.append(to_string(ans%10));
                i--;
            }
        }
        if(carry!=0)
        res.append(to_string(carry));
        reverse(res.begin(),res.end());
        long long k;
        
        for(k=0;k<res.size();k++)
        {
            if(res[k]!='0')
            break;
        }
        if(k==res.size())
        return "0";
        
        res=res.substr(k);
        
        return res;
        
    }