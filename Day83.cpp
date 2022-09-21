  string ReFormatString(string S, int k){

     vector <string> v;

     string s;

     for(int i = 0;i < S.size(); i++)

     {

         if(S[i] != '-')

         s.push_back(S[i]);

     }

     

     transform (s.begin(), s.end(), s.begin(), :: toupper);

     int cnt = 1;

     string ans;

        for(int i = s.size()-1; i>= 0; i--,cnt++)

        {

            if(cnt == k)

            {

            ans += s[i];

            ans.push_back('-'),cnt = 0;

            }

            else ans += s[i];

        }

        reverse(ans.begin(),ans.end());

        if(ans[0] == '-') return ans.substr(1,ans.size());

        return ans;

        

    }