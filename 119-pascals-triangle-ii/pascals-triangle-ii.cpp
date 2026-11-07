class Solution {
public:
    vector<int> getRow(int rowIndex) {
        long long prev = 1;
        vector<int> res;
        res.push_back(1);
        for(int k = 1; k <= rowIndex; k++){
            long long curr = (prev*(rowIndex - k + 1))/k;
            prev = curr;
            res.push_back(curr);
        }
        return res;
    }
};