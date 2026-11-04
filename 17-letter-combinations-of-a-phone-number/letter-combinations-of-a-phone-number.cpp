#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

class Solution {
private:
    void backtrack(int index, const string& digits, const unordered_map<char, string>& phoneMap, string& current, vector<string>& result) {
        
        if (index == digits.length()) {
            result.push_back(current);
            return;
        }

        char digit = digits[index];
        string letters = phoneMap.at(digit);

        for (char letter : letters) {
            current.push_back(letter);     
            backtrack(index + 1, digits, phoneMap, current, result); 
            current.pop_back();            
        }
    }

public:
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};

        unordered_map<char, string> phoneMap = {
            {'2', "abc"},
            {'3', "def"},
            {'4', "ghi"},
            {'5', "jkl"},
            {'6', "mno"},
            {'7', "pqrs"},
            {'8', "tuv"},
            {'9', "wxyz"}
        };

        vector<string> result;
        string current = "";
        backtrack(0, digits, phoneMap, current, result);
        return result;
    }
};