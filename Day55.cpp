    vector<vector<int>> v;

public:
    void solve(int idx, string s, vector<int> pos)
    {
        if (idx == s.size())
        {
            v.push_back(pos);
            return;
        }

        if (idx + 1 < s.size() && s[idx] == '0')
        {
            pos.push_back(idx + 1);
            solve(idx + 1, s, pos);
            pos.pop_back();
            return;
        }

        for (int i = idx; i < min((int)s.size(), idx + 3); i++)
        {
            string t = s.substr(idx, i - idx + 1);
            int val = stoi(t);

            if (0 <= val && val <= 255)
            {
                pos.push_back(i + 1);
                solve(i + 1, s, pos);
                pos.pop_back();
            }
        }
    }
    vector<string> genIp(string &s)
    {
        // Your code here
        vector<int> pos;
        solve(0, s, pos);

        for (auto &i : v)
            i.pop_back();

        vector<string> ans;
        for (auto i : v)
        {
            if (i.size() == 3)
            {
                string make = s;
                for (int idx = i.size() - 1; idx >= 0; idx--)
                    make.insert(make.begin() + i[idx], '.');
                ans.push_back(make);
            }
        }
        return ans;
    }
};