class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> hash;
        for(int i = 0; i < nums.size(); i++){
            int search = target - nums[i];
            if(hash.count(search) > 0){
                return {hash[search] , i};
            }
            hash[nums[i]] = i;
        }
        return {};
    }
};