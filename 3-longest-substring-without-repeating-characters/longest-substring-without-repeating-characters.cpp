class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0;
        int right = 0;
        int n = s.length();
        unordered_map<char, int> res;
        int maxlength = 0;

        for(right; right < n; right++){
            char currentchar = s[right];

            while(res.find(currentchar) != res.end()){
                res.erase(s[left]);
                left++;
            }

            res[currentchar] = 1;

            int currentwindowsize = right - left + 1;

            maxlength = max(maxlength, currentwindowsize);
        }
        return maxlength;
    }
};