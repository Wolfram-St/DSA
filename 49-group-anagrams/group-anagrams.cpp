class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        unordered_map<string, vector<string>> umap;

        for( auto x : strs){
            string temp = x;
            sort(x.begin(), x.end());
            umap[x].push_back(temp);
        }

        for(auto x : umap){
            res.push_back(x.second);
        }
        return res;
    }
};