class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> hash;
        for(int num : nums){
            if(hash.count(num) > 0) return true;
            else hash.insert(num);
        }
        return false;
    }
};