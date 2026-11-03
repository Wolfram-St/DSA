class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int target = nums[n-1];
        int sum = 0;
        int final_sum = 0;
        for(int i = 0; i < n; i++){
            sum = target - nums[i];
            final_sum+=sum;
        }
        return final_sum;
    }
};