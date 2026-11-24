class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> result_set;
        set<int> set1(nums1.begin(),nums1.end());
        
        for(int num : nums2){
            if(set1.count(num)){
                result_set.insert(num);
            }
        }
        return vector<int>(result_set.begin(),result_set.end());
    }
};