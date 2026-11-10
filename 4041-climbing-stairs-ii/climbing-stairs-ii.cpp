class Solution {
public:
    int climbStairs(int n, vector<int>& costs) {
        vector<int> dp(n+1, INT_MAX/2);
        dp[0] = 0;

        for(int j = 1; j <=n; j++){
            dp[j] = dp[j-1] +1;
            if(j >=2){
                dp[j] = min(dp[j], dp[j-2] + 4);
            }
            if(j >=3) {
                dp[j] = min(dp[j], dp[j-3] + 9);
            }
            dp[j] += costs[j-1];
        }
        return dp[n];
    }
};