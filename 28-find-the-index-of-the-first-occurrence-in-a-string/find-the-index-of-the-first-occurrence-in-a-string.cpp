class Solution {
    bool checkstr(const string& haystack, const string& needle, int low){
        for(int k = 0; k < needle.length(); k++){
            if(haystack[low+k] != needle[k]){return false;}
        }
        return true;
    }
public:
    int strStr(string haystack, string needle) {
        int n = haystack.length();
        int m = needle.length();

        if(m > n){
            return -1;
        }
        for(int i = 0; i <= n-m; i++){
            if(haystack[i] == needle[0]){
                if(checkstr(haystack, needle, i)){
                    return i;
                }
            }
                
        }
        return -1;
        
    }
};