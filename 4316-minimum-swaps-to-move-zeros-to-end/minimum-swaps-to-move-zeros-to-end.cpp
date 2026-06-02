class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        int totalZeros = 0;
        int n=nums.size();

        for(int i = 0; i< n;i++){
            if(nums[i] == 0){
                totalZeros++;
            }
        }

        int swap=0;
        for (int i = n- totalZeros; i<n; i++){
            if(nums[i]!=0){
                swap++;
            }
        }
        return swap;
    }
};