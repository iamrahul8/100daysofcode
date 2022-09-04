public:
    vector<string> pattern(int n){
        int row, column, dashes = 0;
        int i, j, dash_counter = 0;
        int value = 1;
        int k, l, decrementor = 0; 
        int column_decrementor = 0;
        int support = n - 1;
        int temp = ((n * n) + 1);
        int temp1 = (n * 2) - 1;
        int z = temp;
        int tracker;
        vector<string> res;
        string s;
        for (i = 1; i <= n; i++) {
            s = "";
            for(int it = 0;it < dash_counter;it++)
                s += "-";
            for (j = 1; j <= (2 * n) - dash_counter; j++) {
                 if (j % 2 == 0)
                    s += "*";
                else {
                    s += to_string(value);
                    value++;
                }
            }
            for (k = 1; k <= (temp1 - decrementor); k++) {
                if (k % 2 == 0)
                    s += "*";
                else {
                    if (k == 1)
                        tracker = temp;
                    s += to_string(temp);
                    temp++;
                }
            }
            decrementor += 2;
            temp = tracker - support;
            support--;
            dash_counter += 2;
            res.push_back(s);
        }
        return res;
    }
};