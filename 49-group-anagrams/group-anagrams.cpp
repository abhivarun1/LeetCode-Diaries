class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> hash;
        for(int i = 0; i < strs.size(); i++){
            string key = strs[i];
            sort(key.begin(),key.end());
            hash[key].push_back(strs[i]);
        }
        vector<vector<string>> result;
        for(auto & res : hash){
            result.push_back(res.second);
        }
        return result;
    }
};