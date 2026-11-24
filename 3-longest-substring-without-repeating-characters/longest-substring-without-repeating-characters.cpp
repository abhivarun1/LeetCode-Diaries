class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,int> hash;
        int left = 0;
        int maxLen = 0;

        for(int right = 0; right < s.length(); right++){
            while(hash.contains(s[right])){
                hash.erase(s[left]);
                left++;
            }
            hash[s[right]] = 1;
            maxLen = max(maxLen, right - left + 1);
        } 
        return maxLen;
    }
};