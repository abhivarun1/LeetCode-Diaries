class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int> hash;
        for(int num : nums){
            if(hash.count(num)){
                hash[num]++;
            } else hash[num] = 1;
        }
        for(auto &num : hash){
            if(num.second == 1) return num.first;
        }
        return nums[0];
    }
};