class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        int n = nums.size();
        int i;
        sort(nums.begin(), nums.end());

        for(i = 0; i < n-2; i++){
            int j = i+1;
            int k = n-1;

            if(i > 0 && nums[i] == nums[i-1]){
                continue;
            }

            while(j < k){
                int sum = nums[i] + nums[j] + nums[k];
                if(sum ==0){
                    res.push_back({nums[i], nums[j], nums[k]});
                    j++;
                    k--;

                    while(j < k && nums[j] == nums[j-1]){
                    j++;
                }
                while(j < k && nums[k] == nums[k+1]){
                    k--;
                }
                }

                if(sum > 0){
                    k--;
                }
                if(sum < 0){
                    j++;
                }

            }
        }
        return res;
        
    }
};