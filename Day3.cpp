//Word Break - Part 2 
// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//  C++

class Solution{
   unordered_map<string, int> m;
   void solve(string s, int start, string currStr, set<string> &res){
       if(start==s.size()){
           res.insert(currStr);
           return;
       }
       
       string word = "";
       for(int i=start;i < s.size(); i++){
           word += s[i];
           if(m[word]){
               string ns = currStr;
               if(currStr.size() > 0){
                   ns += ' ';
               }
               ns += word;
               solve(s, i+1, ns, res);
           }
       }
       
       if(m[word]){
           string ns = currStr;
           if(currStr.size() > 0){
               ns += ' ';
           }
           ns += word;
           res.insert(ns);
       }
   }
public:
   vector<string> wordBreak(int n, vector<string>& dict, string s)
   {
       // code here
       for(auto d: dict){
           m[d]++;
       }
       
       set<string> res;
       string ds = "";
       solve(s, 0, ds, res);
       return vector<string>(res.begin(), res.end());
   }
};
//};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        vector<string> dict;
        string s;
        cin>>n;
        for(int i = 0;i < n;i++){
            cin>>s;
            dict.push_back(s);
        }
        cin>>s;
        
        Solution ob;
        vector<string> ans = ob.wordBreak(n, dict, s);
        if(ans.size() == 0)
            cout<<"Empty\n";
        else{
            sort(ans.begin(), ans.end());
            for(int i = 0;i < ans.size();i++)
                cout<<"("<<ans[i]<<")";
            cout<<endl;
        }
    }
    return 0;
}  // } Driver Code Ends