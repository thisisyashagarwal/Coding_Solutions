// Tabulation
// class Solution {
// public:
//     int kInversePairs(int n, int k) {
//         int dp[1001][1001] = { 1 };
        
//         for(int i=1;i<=n;++i)
//             for(int K=0; K<=k;++K)
//                 for(int j=0; j<= min(K,i-1);++j)
//                     dp[i][K] = (dp[i][K] + dp[i-1][K-j])%1000000007;
//         return dp[n][k];
//     }
// };



// Memoization Approach

class Solution {
public:
    int mod = (int)(1e9 + 7);
    
    int f(int n, int k, vector<vector<int>>& dp){
        //base case
        if(k<=0) return k==0;
        if(n<=0) return 0;
        
        //memoization
        if(dp[n][k]!=-1) return dp[n][k];
        
        
        dp[n][k] = (f(n-1, k, dp) + f(n, k-1, dp))%mod;
        
        return dp[n][k] = (dp[n][k] - f(n-1, k-n, dp) + mod)%mod;
    }
    int kInversePairs(int n, int k) {
        //Initialization of dp
        vector<vector<int>> dp(n+1,vector<int>(k+1,-1));
        return f(n,k,dp);
    }
};

// class Solution {
// public:
//     int kInversePairs(int n, int k) {
        
//     }
// };