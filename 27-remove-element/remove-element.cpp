class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0, k = nums.size();
        while(i < k){
            if(nums[i] == val){
                nums[i] = nums[k - 1];
                k--;
            } else i++;
        }
        return k;
    }
};