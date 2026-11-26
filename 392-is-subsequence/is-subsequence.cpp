class Solution {
public:
    bool isSubsequence(string s, string t) {
        int index = 0;
        bool found;
        for(int i = 0; i < s.length(); i++){
            char ch = s[i];
            found = false;
            for(int j = index; j < t.length(); j++){
                if(ch == t[j]){
                    index = j + 1;
                    found = true;
                    break;
                }
            }
            if(!found) return false;
        }
        return true;
    }
};