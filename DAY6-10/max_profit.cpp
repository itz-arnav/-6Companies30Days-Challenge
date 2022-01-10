class Solution {
  public:
    int maxProfit(int k, int n, int arr[])
{
int dp[k + 1][n];

for(int i = 0; i <= k; i++) dp[i][0] = 0;
for(int j = 0; j < n; j++) dp[0][j] = 0;

for(int t = 1; t <= k; t++) {
int mx = INT_MIN;
for(int d = 1; d < n; d++) {

mx = max(mx, dp[t - 1][d - 1] - arr[d - 1]);
dp[t][d] = max(mx + arr[d], dp[t][d - 1]);
}
}

return dp[k][n - 1];
}
};
