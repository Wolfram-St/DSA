class Solution {
public:
    bool isPalindrome(int x) {
        long rev = 0;
        int num;
        num = x;
        int digit;
        
        if(num<0){
            return false;
        }
        while(num>0){
            digit = num%10;
            rev = rev*10 +digit;
            num /= 10;
        }
        return rev == x;
    }
};