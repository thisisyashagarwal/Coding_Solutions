class Solution {
public:
    int solve(int i, int j, vector<vector<int>> &dp, int& m, int& n) {
        if(i == m-1 || j == n-1) 
            return 1;
        if(dp[i][j] != 0)
            return dp[i][j];
        
        int not_take = solve(i+1, j, dp, m, n);
        int take = 0;
        take = solve(i, j+1, dp, m, n);
        return dp[i][j] = (take + not_take);
    }
    
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m , vector<int>(n , 0));
        return solve(0, 0, dp, m, n);
    }
};