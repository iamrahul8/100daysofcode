public:
int count_swaps(vector<vector<char>> matrix, char ch) {
    int n = matrix.size();
    int m = matrix[0].size();
    int swaps = 0;
    for(int i = 0; i < n; i++) {
        ch = (ch == 'B') ? 'A' : 'B';
        for(int j = 0; j < m; j++) {
            if(j % 2 == 0 && matrix[i][j] != ch) {
                swaps++;
            }
            else if(j % 2 == 1 && matrix[i][j] == ch) {
                swaps++;
            }
        }
    }
    return swaps/2;
}

int MinimumExchange(vector<vector<char>>matrix){
    int ans = INT_MAX;
    int cnt_b = 0;
    int n = matrix.size();
    int m = matrix[0].size();
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(matrix[i][j] == 'B') cnt_b++;
        }
    }
    if(n % 2 == 1 && m % 2 == 1) {
        if(cnt_b > (n*m) / 2) {
            ans = min(ans, count_swaps(matrix, 'A'));
        }
        else {
            ans = min(ans, count_swaps(matrix, 'B'));
        }
    }
    else {
        ans = min(ans, min(count_swaps(matrix, 'A'), count_swaps(matrix, 'B')));
    }
    return ans;