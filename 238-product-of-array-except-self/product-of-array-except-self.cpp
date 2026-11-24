class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> result;
        long long product = 1;
        int hasZero = 0;
        for(int num: nums){
            if(num == 0) hasZero++;
            else product *= num;
        }
        for(int num: nums){
            if(hasZero == 1){
                if(num != 0) result.push_back(0);
                else result.push_back(product);
            } else if(hasZero > 1){
                result.push_back(0);
            } else {
                result.push_back(product/num);
            }
        }
        return result;
    }
};