#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maxLength(vector<int>& nums) {
        int n = nums.size();
        int left = 0;
        int res = 2; 

        int cnt[8] = {0};

        auto add = [&](int x) {
            for (int p : {2, 3, 5, 7}) {
                if (x % p == 0) cnt[p]++;
            }
        };

        auto remove = [&](int x) {
            for (int p : {2, 3, 5, 7}) {
                if (x % p == 0) cnt[p]--;
            }
        };

        auto isValid = [&]() {
            for (int p : {2, 3, 5, 7}) {
                if (cnt[p] > 1) return false;
            }
            return true;
        };

        for (int right = 0; right < n; right++) {
            add(nums[right]);

            while (!isValid()) {
                remove(nums[left]);
                left++;
            }

            res = max(res, right - left + 1);
        }

        return res;
    }
};