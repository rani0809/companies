class Solution
{
    public:
    //Function to count number of ways to reach the nth stair 
    //when order does not matter.
    long long countWays(int m)
    {
        // coin change version 
        int coins[2] = {1,2};  
        int n = 2; 
        int sum = m;  
        int dp[n+1][m+1];  
        
        for(int i = 0; i <= n; ++i) {
            for(int j = 0; j <= m; ++j) {
                if(i == 0) {
                    dp[i][j] = 0;
                }
                if(j == 0) {
                    dp[i][j] = 1; 
                }
            }
        }
        
        
        for(int i = 1; i <= n; ++i) {
            for(int j = 1; j <= m; ++j) {
                if(coins[i-1] > j) {
                    dp[i][j] = dp[i-1][j];
                }
                else {
                    dp[i][j] = dp[i-1][j] + dp[i][j - coins[i-1]]; 
                }
            } 
        }
        
        return dp[2][m]; 
    }
};
