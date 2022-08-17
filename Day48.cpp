//Knight Walk
struct triples{
        int i,j,len;
        triples(int x,int y,int l)
        {
            i=x;
            j=y;
            len = l;
        }
    };
    bool check(int i,int j,int N)
    {
        if(i<0 || j<0 || i>N || j>N)
            return false;
        return true;
    }
	int minStepToReachTarget(vector<int>&KnightPos, vector<int>&TargetPos, int N)
	{
	    vector<vector<int>>visited(N+1,vector<int>(N+1,false));
	    triples start = triples(KnightPos[0]-1,KnightPos[1]-1,0);
	    //cout<<start.i<<endl;
	    vector<int> dx{1,2,-1,2,-2,1,-1,-2};
	    vector<int> dy{2,1,2,-1,1,-2,-2,-1};
	    queue<triples> q;
	    q.push(start);
	    visited[start.i][start.j] = 1;
	    
	    while(!q.empty())
	    {
	        auto t = q.front(); q.pop();
	        
	        if(t.i ==TargetPos[0]-1 && t.j == TargetPos[1]-1 )
	            return t.len;
	            
	        for(int p=0;p<8;p++)
	        {
	            int x = t.i + dx[p];
	            int y = t.j + dy[p];
	            
	            if(check(x,y,N) && !visited[x][y])
	            {
	                triples s = triples(x,y,t.len+1);
	                visited[x][y] = 1;
	                q.push(s);
	            }
	            
	        }
	        
	    }
	    return -1;
	}