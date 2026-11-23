class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> hash;
        vector<int> result;

        for(int i = 0; i < nums.size(); i++){
            int num = nums[i];
            if(hash.count(num)) hash[num]++;
            else hash[num] = 1;
        }

        vector<pair<int,int>> hashed(hash.begin(), hash.end());
        sort(hashed.begin(), hashed.end(), [](auto & a, auto & b) {
            return a.second > b.second;
        });

        for(int i = 0; i < k; i++){
            result.push_back(hashed[i].first);
        }
        return result;
    }
};