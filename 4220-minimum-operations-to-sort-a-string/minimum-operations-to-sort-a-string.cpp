class Solution {
public:
    int minOperations(string s) {
        int n = s.size();

        if(is_sorted(s.begin(), s.end())){
            return 0;
        }
        if(n==2){
            return -1;
        }

        char min_char = *min_element(s.begin(), s.end());
        char max_char = *max_element(s.begin(),s.end());
        
        if(s[0] == min_char || s[n-1] == max_char){
            return 1;
        }

        bool min_prefix = false;
        for(int i = 0; i<n-1; i++){
            if(s[i] == min_char){
                min_prefix = true;
                break;
            }
        }

        bool max_sufix = false;
        for(int i = 1; i<n; i++){
            if(s[i] == max_char){
                max_sufix = true;
                break;
            }
        }
        
        if(!min_prefix && !max_sufix){
            return 3;
        }

        return 2;
    }
};