vector<int> FactDigit(int N){
	    array<int, 10> fact;
	    fact[0] = 1;
	    fact[1] = 1;
	    for(int i=2; i<10; i++)
	        fact[i] = i*fact[i-1];
	    vector<int>ans;
	    int lstPos = 9;
	    while(N){
	        while(fact[lstPos] > N)
	            lstPos--;
	        ans.push_back(lstPos);
	        N-=fact[lstPos];
	    }
	    reverse(ans.begin(), ans.end());
	    return ans;
	}