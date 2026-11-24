class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int> hash;
        for(int num : nums){
            hash[num]++;
        }
        for(auto &num : hash){
            if(num.second == 1) return num.first;
        }
        return nums[0];
    }
};