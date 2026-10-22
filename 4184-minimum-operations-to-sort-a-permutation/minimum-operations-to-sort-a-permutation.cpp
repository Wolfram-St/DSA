class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        if (n <= 1) return 0;

        bool is_inc = true;
        bool is_dec = true;
        int idx0 = -1;

        for (int i = 0; i < n; ++i) {
            if (nums[i] == 0) idx0 = i;
            if (nums[(i + 1) % n] != (nums[i] + 1) % n) is_inc = false;
            if (nums[(i + 1) % n] != (nums[i] - 1 + n) % n) is_dec = false;
        }

        if (is_inc) {
            if (idx0 == 0) return 0;
            return min(idx0, (n - idx0) + 2);
        }

        if (is_dec) {
            int op1 = n - idx0;
            int op2 = ((idx0 + 1) % n) + 1;
            return min(op1, op2);
        }

        return -1;
    }
};