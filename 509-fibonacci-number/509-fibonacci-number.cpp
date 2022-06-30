class Solution {
public:
    // vector<int>dp( n+1, -1);
    int fib(int n) {
        if( n <= 1)
            return n;
        // if( dp[n] != -1)
            // return dp[n];
        return fib(n-1) + fib(n-2);
    }
};