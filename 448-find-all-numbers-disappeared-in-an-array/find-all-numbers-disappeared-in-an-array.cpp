class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> result;
        vector<bool> seen(nums.size() + 1, false);

        for(int num: nums){
            seen[num] = true;
        }
        for(int i = 1; i <= nums.size(); i++){
            if(!seen[i]) result.push_back(i);
        }
        return result;
    }
};