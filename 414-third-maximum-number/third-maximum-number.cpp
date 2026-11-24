class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int,greater<int>> set1(nums.begin(),nums.end());
        vector<int> res(set1.begin(),set1.end());
        if(res.size() < 3) return res[0];
        else return res[2];
    }
};