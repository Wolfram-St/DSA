class Solution {
public:
    int maxSelectedElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        unordered_map<int, int> dp;
        int maxLen = 0;
        int i = 0;

        while (i < nums.size()) {
            int val = nums[i];

            dp[val + 1] = max(dp[val + 1], dp[val] + 1);

            dp[val] = max(dp[val], dp[val - 1] + 1);

            maxLen = max({maxLen, dp[val], dp[val + 1]});
            i++;
        }

        return maxLen;
    }
};