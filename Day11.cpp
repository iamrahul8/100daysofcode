// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


vector<int> reaching_height(int n, int a[]) ;

int main() {
	int t;
	cin >> t;
	while (t-- > 0) {
	    int n; 
	    cin >> n;
	    int a[n];
	    for (int i = 0; i < n; i++) 
	        cin >> a[i];
	    vector<int> v;
	    v = reaching_height(n,a);
	
	    if(v.size()==1 and v[0] == -1){
	        cout << "Not Possible\n";
	    }
	    else{
	    for(int i:v)
	        cout << i << " ";
	    cout << endl;}
	    
	}
	return 0;
}// } Driver Code Ends

vector<int> reaching_height(int n, int a[]) {
   sort(a,a+n);
   vector<int>v;
   vector<int>res;
   for(int i=0;i<n;i++){
       v.insert(v.begin(),a[i]);
   }
   vector<int>g;
   for(int i=0;i<n;i++){
       g.insert(g.begin(),v[i]);
   }
 
   int k=0;
   int l=0;
   for(int i=0;i<n;i++){
       if(i%2==0){
           a[i]=v[k];
           k++;
       }
       else{
           a[i]=g[l];
           l++;
       }
   }
   for(int i=0;i<n;i++){
       res.push_back(a[i]);
   }
   int sum=0;
   for(int i=0;i<n;i++){
       if(i%2==0) sum+=res[i];
       else sum-=res[i];
   }
   if(sum<=0){
       res.clear();
       res.push_back(-1);
   }
   return res;
}