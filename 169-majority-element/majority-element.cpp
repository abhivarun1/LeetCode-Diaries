class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> hash;
        int target = nums.size() / 2;
        for(int num: nums){
            ++hash[num];
            if(hash[num] > target){
                return num;
            }
        }
        return -1;
    }
};