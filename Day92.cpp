int solve(vector<int> &v,int k,int it){
	if(v.size()==1)
	{
		return v[0];
	
	}
	it = (it+k)%v.size();
	v.erase(v.begin()+it);

    
	 return solve(v,k,it);


}

    int safePos(int n, int k) {
    vector<int> v;
	for (int i = 0; i < n; ++i)
	{
		v.push_back(i+1);
	}
	int it = 0;
	return solve(v,k-1,it);
    }