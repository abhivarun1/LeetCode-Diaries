#include <vector>
using namespace std;

class Solution {
public:
    int countDominantElements(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return 1;

        int count = 0;
        for (int i = 0; i < n; i++) {
            if (i == 0 && nums[i] >= nums[i + 1]) {
                count++;
            } else if (i == n - 1 && nums[i] >= nums[i - 1]) {
                count++;
            } else if (i > 0 && i < n - 1 && nums[i] >= (nums[i - 1] + nums[i + 1]) / 2.0) {
                count++;
            }
        }
        return count;
    }
};