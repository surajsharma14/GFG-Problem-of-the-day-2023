class Solution{
    public:
     long long solve(int n, int i, int j, int arr[],vector<vector<long long>> &dp){
        if(i>j) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        long long c1 =  arr[i] - solve(n,i+1,j,arr,dp);
        long long c2 =  arr[j] - solve(n,i,j-1,arr,dp);
        return dp[i][j] = max(c1,c2);
    }
    
    long long maximumAmount(int n, int arr[]){
       vector<vector<long long>> dp(n+1, vector<long long>(n+1,-1));
        long long v =  solve(n,0,n-1,arr,dp);
        long long tsum = 0;
        for(int i = 0;i<n;i++) tsum += arr[i];
        return (tsum-v)/2+v;
    }
};
