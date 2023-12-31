class Solution {
    
    public:
    int isPossible(int n , int coins[]) 
    {
         vector<vector<int>> dp(n + 1, vector<int>(2025, -1));
        if (solve(n, 2024, coins, dp)) return 1;
    
        for (int i = 1; 24*i <= 2024; i++) {
            if (solve(n, 24*i, coins, dp)) return 1;
        }
        for (int i = 1; 20*i <= 2024; i++) {
            if (solve(n, 20*i, coins, dp)) return 1;
        }
        return 0;
    }
     bool solve(int n, int sum, int coins[], vector<vector<int>> &dp) {
        if (sum == 0) return true;
        if (sum < 0 || n == 0) return false;
        if (dp[n][sum] != -1) return dp[n][sum];
    
        // include
        int inc = solve(n - 1, sum - coins[n - 1], coins, dp);
    
        // exclude
        int exc = solve(n - 1, sum, coins, dp);
    
        return dp[n][sum] = inc || exc;
    }
    
};
