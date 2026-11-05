class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int m = arr2.size();
        int left = 0;
        int res = 0;
        sort(arr2.begin(), arr2.end());

        for(int i = 0; i < arr1.size(); i++){
            bool valid = true;
            for(int j = 0; j < arr2.size(); j++){
                if(abs(arr1[i] - arr2[j]) <= d){
                    valid = false;
                }
            }
            if(valid){
                res++;
            }
        }
        return res;
        
    }
};