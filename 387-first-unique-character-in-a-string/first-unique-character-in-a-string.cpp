class Solution {
public:
    int firstUniqChar(string s) {
        map<char, vector<int>> hash;
        for(int i = 0; i < s.length(); i++){
            char ch = s[i];
            if(hash.count(ch)){
                hash[ch].push_back(i);
            } else hash[ch] = {i};
        }
        for(int i = 0; i < s.length(); i++){
            char ch = s[i];
            if(hash[ch].size() == 1) return i;
        }
        return -1;
    }
};