//Alternate positive and negative numbers
//function

	void rearrange(int arr[], int n) 	 
	{
	    vector<int>pos;
	    vector<int>neg;
	    for(int i=0; i<n; i++)
	    {
	        if(arr[i]>=0)
	        pos.push_back(arr[i]);
	        else
	        neg.push_back(arr[i]);
	         
	    }
	    int m=min(neg.size(),pos.size());
	    for(int i=0,j=0; i<2*m; i+=2,j++)
	    {
	        
	        arr[i]=pos[j];
	        arr[i+1]=neg[j];
	    }
	    if(m==pos.size())
	    {
	        for(int i=2*m; i<n; m++,i++)
	        {
	            arr[i]=neg[m];
	        }
	    }
	    else
	    {
	        for(int i=2*m; i<n; m++,i++)
	        {
	            arr[i]=pos[m];
	        }
	        
	    }
	}