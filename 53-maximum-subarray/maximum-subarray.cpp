#include<vector>
#include <algorithm>
#include <climits>

class Solution {
public:
    int maxSubArray(std::vector<int>& nums) {
        int current_sum = 0;
        int max_sum = INT_MIN; 
        
        for (int num : nums) {
            current_sum = std::max(num, current_sum + num);
            max_sum = std::max(max_sum, current_sum);
        }
        
        return max_sum;
    }
};