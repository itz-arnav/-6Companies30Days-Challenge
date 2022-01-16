int minDifference(int arr[], int n)  { 
	    int sum = 0;
	    for(int i=0; i<n; i++) sum+=arr[i];
	    
	    int dp[n+1][(sum/2)+1];
	    
	    for(int i=0; i<=n; i++){
	        for(int j=0; j<=sum/2; j++){
	            if(j==0) dp[i][j] = 0;
	            else if(i==0) dp[i][j] = j;
	            else if(arr[i-1]>j) dp[i][j] = dp[i-1][j];
	            else dp[i][j] = min(dp[i-1][j], dp[i-1][j-arr[i-1]]);
	        }
	    }
	    
	    return (sum%2) + 2*dp[n][sum/2];
} 
