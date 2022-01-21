class Solution{
    public:
    vector<vector<long long>> dp;
    int mod = 1000000007;
    int numOfWays(long long n, int x) {
        long long dp[n+1];
        memset(dp, 0, sizeof(dp));
        
        // Always 1 way to represent 0 or 1
        // as sum of powers of natural numbers
        dp[0] = dp[1] = 1;
        
        // For n == 10 and x == 2, we will only try till 3^2
        // else, the sum will exceed n
        int maxLimit = pow(n, 1.0/x);

        for(int i = 2; i <= maxLimit; i++){
            int curr = pow(i, x);
            
            // Same as "include" condition in recursive code
            // and since, we are running a loop from i to maxLimit
            // the "exclude" condition is also handled.
            for(int j = n; j >= curr; j--){
                dp[j] = (dp[j] +  dp[j-curr])%mod;
            }
        }
        
        return (int)dp[n]%mod;
    }
};
