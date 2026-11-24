class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = 0;
        int target = 0;
        for(int i = 0; i < nums.size(); i++){
            sum += nums[i];
            target = target + (i+1);
        }
        return target - sum;
    }
};