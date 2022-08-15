// Matrix Exponentiation

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
   typedef long long int ll;
   typedef vector<vector<ll>> matrix;
   int mod= 1e9+7;
   matrix prod(matrix a,matrix b){
       matrix temp(2,vector<ll>(2,0));
       for(int i=0;i<2;i++){
           for(int j=0;j<2;j++){
               for(int k=0;k<2;k++){
                   temp[i][j]+=(a[i][k]*b[k][j])%(mod);
               }
           }
       }
       return temp;
   }
   vector<vector<ll>> matrixExp(vector<vector<ll>> a,int power){
       if(power==1){
           return a;
       }
       else{
           vector<vector<ll>> temp = matrixExp(a,power/2);
           temp = prod(temp,temp);
           if(power%2==1){
               temp = prod(temp,a);
           }
           return temp;
       }
   }
   int FindNthTerm(long long int n) {
       if(n<2)
           return 1;
       matrix a{{1,1},{1,0}};
       a = matrixExp(a,n-1);
       ll temp;
       temp = (a[0][0]+a[0][1])%mod;
       return temp;
   }
};


// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		long long int n;
		cin >> n;
		Solution obj;
		int ans = obj.FindNthTerm(n);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends