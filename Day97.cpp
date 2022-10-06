vector<int> prefixCount(int N, int Q, string li[], string query[])

    {

          unordered_map<string, int> mp;

 

        for(int i = 0; i < N; i++) {

 

            for(int j = 0; j < li[i].size(); j++) {

 

                string t = li[i].substr(0, j+1);

 

                mp[t]++;

 

            }

 

        }

 

        vector<int> ans;

 

        for(int i = 0; i < Q; i++) {

 

            if(mp.find(query[i]) != mp.end()) {

 

                ans.push_back(mp[query[i]]);

 

            }

 

            else {

 

                ans.push_back(0);

 

            }

 

        }

 

        return ans;
}